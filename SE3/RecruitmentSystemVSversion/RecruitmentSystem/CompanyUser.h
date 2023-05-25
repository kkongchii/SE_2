#ifndef USERMANAGEMENT_COMPANYUSER_H
#define USERMANAGEMENT_COMPANYUSER_H

#include <iostream>
#include <string>
#include "User.h"
#include "RecruitmentList.h"

using namespace std;

class RecruitmentList;

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
