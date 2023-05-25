#ifndef USERMANAGEMENT_RECRUITMENT_CPP
#define USERMANAGEMENT_RECRUITMENT_CPP
#include "Recruitment.h"

Recruitment::Recruitment(string task, int limitApplicantNum, string deadline, CompanyUser* companyUser) {
    this->task = task;
    this->limitApplicantNum = limitApplicantNum;
    this->deadline = deadline;
    this->companyUser = companyUser;
    this->applicantNum = 0;
}

tuple<string, int, string, int, string, int> Recruitment::getRecruitmentDetails() {
    string companyName; int SSN;
    tie(companyName, SSN) = this->companyUser->getCompanyUserDetails();

    return {
        companyName,
        SSN,
        this->task,
        this->limitApplicantNum,
        this->deadline,
        this->applicantNum
    };
}

string Recruitment::getDeadline() {
    return this->deadline;
}

int Recruitment::getApplicantNum() {
    return this->applicantNum;
}

void Recruitment::setApplicantNum(int num) {
    this->applicantNum = num;
}

#endif //USERMANAGEMENT_RECRUITMENT_CPP
