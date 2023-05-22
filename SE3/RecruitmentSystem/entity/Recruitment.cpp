#ifndef USERMANAGEMENT_RECRUITMENT_CPP
#define USERMANAGEMENT_RECRUITMENT_CPP
#include "Recruitment.h"

Recruitment::Recruitment(string task, int limitApplicantNum, string deadline, CompanyUser* companyUser) {
    this->task = task;
    this->limitApplicantNum = limitApplicantNum;
    this->deadline = deadline;
    this->companyUser = companyUser;
}

// Recruitment의 전체 멤버변수에 대한 Getter
// [0] string CompanyName,
// [1] int SSN,
// [2] string task,
// [3] int limitApplicantNum,
// [4] string deadline
tuple<string, int, string, int, string> Recruitment::getRecruitmentDetails() {
    string companyName; int SSN;
    tie(companyName, SSN) = this->companyUser->getCompanyUserDetails();

    return {
        companyName,
        SSN,
        this->task,
        this->limitApplicantNum,
        this->deadline
    };
}

#endif //USERMANAGEMENT_RECRUITMENT_CPP
