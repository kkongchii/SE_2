//
// Created by YeongBin on 2023-05-20.
//

#ifndef USERMANAGEMENT_GENERALUSER_H
#define USERMANAGEMENT_GENERALUSER_H
#include <iostream>
#include <string>
#include "User.h"

using namespace std;

class GeneralUser : public User{
private:
    int personalRegistrationNumber; // 주민번호
    // vector<JobApplication*> ownJobApplicationList;
public:
    GeneralUser(string name, int personalNum, string id, string pw); // GeneralUser Class 생성자
    string getClassType() override; // 자식 클래스의 타입을 파악하기 위해서 재정의한 함수
    int getPersonalRegistrationNumber();
    void setPersonalRegistrationNumber(int personalNum);
    // 이상 getter, setter
};
#endif //USERMANAGEMENT_GENERALUSER_H

