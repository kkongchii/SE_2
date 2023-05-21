//
// Created by YeongBin on 2023-05-20.
//


#ifndef USERMANAGEMENT_COMPANYUSER_H
#define USERMANAGEMENT_COMPANYUSER_H

#include <iostream>
#include <string>
#include "User.h"

using namespace std;

class CompanyUser : public User{
private:
    int companyRegistrationNumber; // 사업자번호
    // vector<Recruitment*> ownRecruitmentList;
public:
    CompanyUser(string name, int companyNum, string id, string pw);
    string getClassType() override; // 자식 클래스의 타입을 파악하기 위해서 재정의한 함수
    int getCompanyRegistrationNumber();
    void setCompanyRegistrationNumber(int companyNum);
    // 이상 getter, setter
};

#endif //USERMANAGEMENT_COMPANYUSER_H
