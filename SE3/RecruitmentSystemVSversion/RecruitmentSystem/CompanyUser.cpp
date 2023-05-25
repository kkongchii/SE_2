#ifndef USERMANAGEMENT_COMPANYUSER_CPP
#define USERMANAGEMENT_COMPANYUSER_CPP
#include "CompanyUser.h"

/*
Function : CompanyUser::CompanyUser(string name, int companyNum, string id, string pw) : User(name, id, pw)
Description : CompanyUser Class ������
ReturnType : X
Parameter : string name, int companyNum, string id, string pw 
Author : ���Ѿ�
Created : 2023/05/25
*/
CompanyUser::CompanyUser(string name, int companyNum, string id, string pw) : User(name, id, pw) {
    this->companyRegistrationNumber = companyNum;
    this->ownRecruitmentList = new RecruitmentList();
}

/*
Function : CompanyUser::~CompanyUser()
Description : CompanyUser Class �Ҹ���
ReturnType : X
Parameter : X
Author : ���Ѿ�
Created : 2023/05/25
*/
CompanyUser::~CompanyUser() {

}

/*
Function : int CompanyUser::getCompanyRegistrationNumber()
Description : ����ڹ�ȣ Getter �Լ�
ReturnType : int
Parameter : X
Author : ���Ѿ�
Created : 2023/05/25
*/
int CompanyUser::getCompanyRegistrationNumber() {
    return this->companyRegistrationNumber;
}

/*
Function : CompanyUser::setCompanyRegistrationNumber()
Description : ����ڹ�ȣ Setter �Լ�
ReturnType : void
Parameter : int companyNum
Author : ���Ѿ�
Created : 2023/05/25
*/
void CompanyUser::setCompanyRegistrationNumber(int companyNum) {
    this->companyRegistrationNumber = companyNum;
}

/*
Function : string CompanyUser::getClassType()
Description : �ڽ� Ŭ������ Ÿ���� �ľ��ϱ� ���ؼ� �������� �Լ�
ReturnType : string
Parameter : X
Author : ���Ѿ�
Created : 2023/05/25
*/
string CompanyUser::getClassType() {
    return "Company";
}

/*
Function : RecruitmentList* CompanyUser::getOwnRecruitmentList()
Description : �ڻ� ä������ ����Ʈ(getOwnRecruitmentList) Getter �Լ�
ReturnType : RecruitmentList*
Parameter : X
Author : ���Ѿ�
Created : 2023/05/25
*/
RecruitmentList* CompanyUser::getOwnRecruitmentList() {
    return this->ownRecruitmentList;
}

/*
Function : pair<string, int> CompanyUser::getCompanyUserDetails()
Description : ȸ�� ����(ȸ���̸�, ����ڹ�ȣ) Getter �Լ�
ReturnType : pair<string, int>
Parameter : X
Author : ���Ѿ�
Created : 2023/05/25
*/
pair<string, int> CompanyUser::getCompanyUserDetails() {
    return { this->getName(), this->companyRegistrationNumber };
}

#endif //USERMANAGEMENT_COMPANYUSER_CPP
