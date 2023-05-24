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
    int companyRegistrationNumber; // 사업자번호
    RecruitmentList* ownRecruitmentList;
public:
    CompanyUser(string name, int companyNum, string id, string pw);
    ~CompanyUser();
    string getClassType() override; // 자식 클래스의 타입을 파악하기 위해서 재정의한 함수
    int getCompanyRegistrationNumber();
    void setCompanyRegistrationNumber(int companyNum);
    RecruitmentList* getOwnRecruitmentList();

    // Recruitment의 전체 멤버변수에 대한 Getter
    // [0] string CompanyName,
    // [1] int SSN,
    pair<string, int> getCompanyUserDetails();
    // 이상 getter, setter

};

#endif //USERMANAGEMENT_COMPANYUSER_H
