#ifndef USERMANAGEMENT_GENERALUSER_H
#define USERMANAGEMENT_GENERALUSER_H
#include <iostream>
#include <string>
#include "entity/User.h"
#include "JobApplicationList.h"

using namespace std;

class JobApplicationList;

class GeneralUser : public User{
private:
    int personalRegistrationNumber; // 주민번호
    JobApplicationList* ownJobApplicationList;
public:
    GeneralUser(string name, int personalNum, string id, string pw); // GeneralUser Class 생성자
    ~GeneralUser();
    string getClassType() override; // 자식 클래스의 타입을 파악하기 위해서 재정의한 함수
    int getPersonalRegistrationNumber();
    void setPersonalRegistrationNumber(int personalNum);
    JobApplicationList* getJobApplicationList(); // 지원정보 리스트 반환
    // 이상 getter, setter
};
#endif //USERMANAGEMENT_GENERALUSER_H

