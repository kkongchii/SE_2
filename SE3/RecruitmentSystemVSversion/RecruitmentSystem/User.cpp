#ifndef USERMANAGEMENT_USER_CPP
#define USERMANAGEMENT_USER_CPP
#include "User.h"

/*
Function : User::User(string name, string id, string pw)
Description : User Class ������
ReturnType : X
Parameter : string name, string id, string pw 
Author : ���Ѿ�
Created : 2022/05/25
*/
User::User(string name, string id, string pw) {
    this->name = name;
    this->id = id;
    this->password = pw;
};

/*
Function : virtual User::~User()
Description : User Class ���� �Ҹ���, CompanyUser�� GeneralUser�� ������ ���� �ʿ�
ReturnType : X
Parameter : X
Author : ���Ѿ�
Created : 2022/05/25
*/
User::~User() {}

/*
Function : string User::getName()
Description : ���� �̸� Getter �Լ�
ReturnType : string
Parameter : X
Author : ���Ѿ�
Created : 2022/05/25
*/
string User::getName() {
    return this->name;
}

/*
Function : string User::getId()
Description : ���� ID Getter �Լ�
ReturnType : string
Parameter : X
Author : ���Ѿ�
Created : 2022/05/25
*/
string User::getId() {
    return this->id;
}

/*
Function : string User::getPW()
Description : ���� PW Getter �Լ�
ReturnType : string
Parameter : X
Author : ���Ѿ�
Created : 2022/05/25
*/
string User::getPW() {
    return this->password;
}

/*
Function : void User::setName()
Description : ���� �̸� Setter �Լ�
ReturnType : void
Parameter : string name
Author : ���Ѿ�
Created : 2022/05/25
*/
void User::setName(string name) {
    this->name = name;
}

/*
Function : void User::setId()
Description : ���� ID Setter �Լ�
ReturnType : void
Parameter : string id
Author : ���Ѿ�
Created : 2022/05/25
*/
void User::setId(string id) {
    this->id = id;
}

/*
Function : void User::setPW()
Description : ���� PW Setter �Լ�
ReturnType : void
Parameter : string pw
Author : ���Ѿ�
Created : 2022/05/25
*/
void User::setPW(string pw) {
    this->password = pw;
}

#endif //USERMANAGEMENT_USER_CPP
