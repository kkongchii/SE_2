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
    CompanyUser* CUser;
    string task;
    int limitApplicantNum;
    string deadline;
public:
    Recruitment(CompanyUser* CUser, string task, int limitApplicantNum, string deadline); // Recruitment Class 생성자

    // Recruitment의 전체 멤버변수에 대한 Getter
    // [0] string CompanyName,
    // [1] int SSN,
    // [2] string task,
    // [3] int limitApplicantNum,
    // [4] string deadline
    tuple<string, int, string, int, string> getRecruitmentDetails();
};


#endif //USERMANAGEMENT_RECRUITMENT_H
