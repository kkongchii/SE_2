#ifndef USERMANAGEMENT_COMPANYUSER_H
#define USERMANAGEMENT_COMPANYUSER_H

#include <iostream>
#include <string>
#include "User.h"
#include "RecruitmentList.h"

using namespace std;

class RecruitmentList;

/*
class : CompanyUser
Description : 회사유저 정보를 위한 Entity 클래스
Extends : User
Author : 정한얼
Created : 2022/05/25
*/
class CompanyUser : public User {
private:
    int companyRegistrationNumber;
    RecruitmentList* ownRecruitmentList;
public:
    CompanyUser(string name, int companyNum, string id, string pw);
    ~CompanyUser();
    string getClassType() override;
    int getCompanyRegistrationNumber();
    void setCompanyRegistrationNumber(int companyNum);
    RecruitmentList* getOwnRecruitmentList();
    pair<string, int> getCompanyUserDetails();

};

#endif //USERMANAGEMENT_COMPANYUSER_H
