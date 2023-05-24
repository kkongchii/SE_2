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
    int companyRegistrationNumber; // ����ڹ�ȣ
    RecruitmentList* ownRecruitmentList;
public:
    CompanyUser(string name, int companyNum, string id, string pw);
    ~CompanyUser();
    string getClassType() override; // �ڽ� Ŭ������ Ÿ���� �ľ��ϱ� ���ؼ� �������� �Լ�
    int getCompanyRegistrationNumber();
    void setCompanyRegistrationNumber(int companyNum);
    RecruitmentList* getOwnRecruitmentList();

    // Recruitment�� ��ü ��������� ���� Getter
    // [0] string CompanyName,
    // [1] int SSN,
    pair<string, int> getCompanyUserDetails();
    // �̻� getter, setter

};

#endif //USERMANAGEMENT_COMPANYUSER_H
