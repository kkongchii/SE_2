#ifndef ENTITY_RECRUITMENT_H
#define ENTITY_RECRUITMENT_H
#include <iostream>
#include <tuple>
#include <string>
#include <vector>
#include "JobApplicationList.h"

using namespace std;

class JobApplicationList;

class Recruitment{
private:
    string companyName;
    int companyRegistrationNumber;
    string task;
    int limitApplicantNum;
    string deadline;
    JobApplicationList* appliedJobApplicationList;
    vector<pair<string, int>> countApplicantsByTask();  // 업무별 지원자 수 (task, applicantsNum) 쌍의 vector로 반환해주는 함수
public:
    Recruitment(string companyName, int companyRegistrationNumber, string task, int limitApplicantNum, string deadline); // Recruitment Class 생성자
    tuple<string, int, string, int, string> getRecruitmentDetails();  // Recruitment의 전체 멤버변수에 대한 Getter
    void excludeJobApplication(string userName);
};

#endif