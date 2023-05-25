#ifndef USERMANAGEMENT_RECRUITMENT_CPP
#define USERMANAGEMENT_RECRUITMENT_CPP
#include "Recruitment.h"

/*
Function : Recruitment::Recruitment(string task, int limitApplicantNum, string deadline, CompanyUser* companyUser)
Description : Recruitment Class 생성자
ReturnType : X
Parameter : string task, int limitApplicantNum, string deadline, CompanyUser* companyUser
Author : 정한얼
Created : 2023/05/25
*/
Recruitment::Recruitment(string task, int limitApplicantNum, string deadline, CompanyUser* companyUser) {
    this->task = task;
    this->limitApplicantNum = limitApplicantNum;
    this->deadline = deadline;
    this->companyUser = companyUser;
    this->applicantNum = 0;
}

/*
Function : tuple<string, int, string, int, string, int> Recruitment::getRecruitmentDetails()
Description : Recruitment의 전체 멤버변수에 대한 Getter, {회사이름(0), 사업자번호(1), 업무(2), 최대 지원자 수(3), 마감일자(4), 현재 지원자 수(5)}
ReturnType : tuple<string, int, string, int, string, int>
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
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

/*
Function : string Recruitment::getDeadline()
Description : 마감일자에 대한 Getter()
ReturnType : string
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
string Recruitment::getDeadline() {
    return this->deadline;
}

/*
Function : int Recruitment::getApplicantNum()
Description : 현재 지원자 수에 대한 Getter()
ReturnType : int
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
int Recruitment::getApplicantNum() {
    return this->applicantNum;
}

/*
Function : void Recruitment::setApplicantNum(int num)
Description : 현재 지원자 수에 대한 Setter()
ReturnType : void
Parameter : int num
Author : 정한얼
Created : 2023/05/25
*/
void Recruitment::setApplicantNum(int num) {
    this->applicantNum = num;
}

#endif //USERMANAGEMENT_RECRUITMENT_CPP
