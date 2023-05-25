#ifndef USERMANAGEMENT_USER_CPP
#define USERMANAGEMENT_USER_CPP
#include "User.h"

/*
Function : User::User(string name, string id, string pw)
Description : User Class 생성자
ReturnType : X
Parameter : string name, string id, string pw 
Author : 정한얼
Created : 2022/05/25
*/
User::User(string name, string id, string pw) {
    this->name = name;
    this->id = id;
    this->password = pw;
};

/*
Function : virtual User::~User()
Description : User Class 가상 소멸자, CompanyUser와 GeneralUser의 삭제를 위해 필요
ReturnType : X
Parameter : X
Author : 정한얼
Created : 2022/05/25
*/
User::~User() {}

/*
Function : string User::getName()
Description : 유저 이름 Getter 함수
ReturnType : string
Parameter : X
Author : 정한얼
Created : 2022/05/25
*/
string User::getName() {
    return this->name;
}

/*
Function : string User::getId()
Description : 유저 ID Getter 함수
ReturnType : string
Parameter : X
Author : 정한얼
Created : 2022/05/25
*/
string User::getId() {
    return this->id;
}

/*
Function : string User::getPW()
Description : 유저 PW Getter 함수
ReturnType : string
Parameter : X
Author : 정한얼
Created : 2022/05/25
*/
string User::getPW() {
    return this->password;
}

/*
Function : void User::setName()
Description : 유저 이름 Setter 함수
ReturnType : void
Parameter : string name
Author : 정한얼
Created : 2022/05/25
*/
void User::setName(string name) {
    this->name = name;
}

/*
Function : void User::setId()
Description : 유저 ID Setter 함수
ReturnType : void
Parameter : string id
Author : 정한얼
Created : 2022/05/25
*/
void User::setId(string id) {
    this->id = id;
}

/*
Function : void User::setPW()
Description : 유저 PW Setter 함수
ReturnType : void
Parameter : string pw
Author : 정한얼
Created : 2022/05/25
*/
void User::setPW(string pw) {
    this->password = pw;
}

#endif //USERMANAGEMENT_USER_CPP
