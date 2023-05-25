#ifndef USERMANAGEMENT_COMPANYUSER_CPP
#define USERMANAGEMENT_COMPANYUSER_CPP
#include "CompanyUser.h"

/*
Function : CompanyUser::CompanyUser(string name, int companyNum, string id, string pw) : User(name, id, pw)
Description : CompanyUser Class 생성자
ReturnType : X
Parameter : string name, int companyNum, string id, string pw 
Author : 정한얼
Created : 2023/05/25
*/
CompanyUser::CompanyUser(string name, int companyNum, string id, string pw) : User(name, id, pw) {
    this->companyRegistrationNumber = companyNum;
    this->ownRecruitmentList = new RecruitmentList();
}

/*
Function : CompanyUser::~CompanyUser()
Description : CompanyUser Class 소멸자
ReturnType : X
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
CompanyUser::~CompanyUser() {

}

/*
Function : int CompanyUser::getCompanyRegistrationNumber()
Description : 사업자번호 Getter 함수
ReturnType : int
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
int CompanyUser::getCompanyRegistrationNumber() {
    return this->companyRegistrationNumber;
}

/*
Function : CompanyUser::setCompanyRegistrationNumber()
Description : 사업자번호 Setter 함수
ReturnType : void
Parameter : int companyNum
Author : 정한얼
Created : 2023/05/25
*/
void CompanyUser::setCompanyRegistrationNumber(int companyNum) {
    this->companyRegistrationNumber = companyNum;
}

/*
Function : string CompanyUser::getClassType()
Description : 자식 클래스의 타입을 파악하기 위해서 재정의한 함수
ReturnType : string
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
string CompanyUser::getClassType() {
    return "Company";
}

/*
Function : RecruitmentList* CompanyUser::getOwnRecruitmentList()
Description : 자사 채용정보 리스트(getOwnRecruitmentList) Getter 함수
ReturnType : RecruitmentList*
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
RecruitmentList* CompanyUser::getOwnRecruitmentList() {
    return this->ownRecruitmentList;
}

/*
Function : pair<string, int> CompanyUser::getCompanyUserDetails()
Description : 회사 정보(회사이름, 사업자번호) Getter 함수
ReturnType : pair<string, int>
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
pair<string, int> CompanyUser::getCompanyUserDetails() {
    return { this->getName(), this->companyRegistrationNumber };
}

#endif //USERMANAGEMENT_COMPANYUSER_CPP
