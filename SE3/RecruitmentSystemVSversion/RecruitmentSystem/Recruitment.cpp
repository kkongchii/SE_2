#ifndef USERMANAGEMENT_RECRUITMENT_CPP
#define USERMANAGEMENT_RECRUITMENT_CPP
#include "Recruitment.h"

/*
Function : Recruitment::Recruitment(string task, int limitApplicantNum, string deadline, CompanyUser* companyUser)
Description : Recruitment Class ������
ReturnType : X
Parameter : string task, int limitApplicantNum, string deadline, CompanyUser* companyUser
Author : ���Ѿ�
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
Description : Recruitment�� ��ü ��������� ���� Getter, {ȸ���̸�(0), ����ڹ�ȣ(1), ����(2), �ִ� ������ ��(3), ��������(4), ���� ������ ��(5)}
ReturnType : tuple<string, int, string, int, string, int>
Parameter : X
Author : ���Ѿ�
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
Description : �������ڿ� ���� Getter()
ReturnType : string
Parameter : X
Author : ���Ѿ�
Created : 2023/05/25
*/
string Recruitment::getDeadline() {
    return this->deadline;
}

/*
Function : int Recruitment::getApplicantNum()
Description : ���� ������ ���� ���� Getter()
ReturnType : int
Parameter : X
Author : ���Ѿ�
Created : 2023/05/25
*/
int Recruitment::getApplicantNum() {
    return this->applicantNum;
}

/*
Function : void Recruitment::setApplicantNum(int num)
Description : ���� ������ ���� ���� Setter()
ReturnType : void
Parameter : int num
Author : ���Ѿ�
Created : 2023/05/25
*/
void Recruitment::setApplicantNum(int num) {
    this->applicantNum = num;
}

#endif //USERMANAGEMENT_RECRUITMENT_CPP
