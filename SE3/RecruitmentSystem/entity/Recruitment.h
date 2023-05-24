#ifndef USERMANAGEMENT_RECRUITMENT_H
#define USERMANAGEMENT_RECRUITMENT_H
#include <iostream>
#include <tuple>
#include <string>
#include <vector>
#include "CompanyUser.h"

using namespace std;

class CompanyUser;

class Recruitment {
private:
    string task;
    int limitApplicantNum;
    string deadline;
    int applicantNum;
    CompanyUser* companyUser;
public:
    Recruitment(string task, int limitApplicantNum, string deadline, CompanyUser* companyUser); // Recruitment Class 생성자

    // Recruitment의 전체 멤버변수에 대한 Getter
    // [0] string CompanyName,
    // [1] int SSN,
    // [2] string task,
    // [3] int limitApplicantNum,
    // [4] string deadline
    tuple<string, int, string, int, string, int> getRecruitmentDetails();
    string getDeadline();
    int getApplicantNum();
    void setApplicantNum(int num);
};


#endif //USERMANAGEMENT_RECRUITMENT_H
