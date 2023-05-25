#ifndef USERMANAGEMENT_GENERALUSER_H
#define USERMANAGEMENT_GENERALUSER_H
#include <iostream>
#include <string>
#include "User.h"
#include "JobApplicationList.h"

using namespace std;

class JobApplicationList;

/*
class : GeneralUser
Description : �Ϲ����� ������ ���� Entity Ŭ����
Extends : User
Author : ���Ѿ�
Created : 2022/05/25
*/
class GeneralUser : public User {
private:
    int personalRegistrationNumber;
    JobApplicationList* ownJobApplicationList;
public:
    GeneralUser(string name, int personalNum, string id, string pw); 
    ~GeneralUser();
    string getClassType() override;
    int getPersonalRegistrationNumber();
    void setPersonalRegistrationNumber(int personalNum);
    JobApplicationList* getOwnJobApplicationList(); 
    
};
#endif //USERMANAGEMENT_GENERALUSER_H

