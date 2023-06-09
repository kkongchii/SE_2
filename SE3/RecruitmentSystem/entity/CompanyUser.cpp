#ifndef USERMANAGEMENT_COMPANYUSER_CPP
#define USERMANAGEMENT_COMPANYUSER_CPP
#include "CompanyUser.h"

CompanyUser::CompanyUser(string name, int companyNum, string id, string pw): User(name, id, pw) {
    this->companyRegistrationNumber = companyNum;
    this->ownRecruitmentList = new RecruitmentList();
}

CompanyUser::~CompanyUser() {
    
}

int CompanyUser::getCompanyRegistrationNumber() {
    return this->companyRegistrationNumber;
}

void CompanyUser::setCompanyRegistrationNumber(int companyNum) {
    this->companyRegistrationNumber = companyNum;
}

string CompanyUser::getClassType() {
    return "Company"; // 어떤 자식 타입인지 반환하는 함수
}

RecruitmentList* CompanyUser::getOwnRecruitmentList() {
    return this->ownRecruitmentList;
}

pair<string, int> CompanyUser::getCompanyUserDetails() {
    return {this->getName(), this->companyRegistrationNumber};
}

#endif //USERMANAGEMENT_COMPANYUSER_CPP
