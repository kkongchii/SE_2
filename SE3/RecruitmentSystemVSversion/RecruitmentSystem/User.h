#ifndef USERMANAGEMENT_USER_H
#define USERMANAGEMENT_USER_H
#include <iostream>
#include <string>

using namespace std;

/*
class : User
Description : 유저 정보를 위한 Entity 클래스
Author : 정한얼
Created : 2023/05/25
*/
class User{
private:
    string name;
    string id;
    string password;
public:
    User(string name, string id, string pw); 
    virtual ~User();
    /*
    Function : virtual User::getClassType()
    Description : 자식 클래스의 타입을 파악하기 위해서 선언한 가상함수
    ReturnType : string
    Parameter : X
    */
    virtual string getClassType() = 0; 
    string getName();
    string getId();
    string getPW();
    void setName(string name);
    void setId(string id);
    void setPW(string id);
};

#endif //USERMANAGEMENT_USER_H
