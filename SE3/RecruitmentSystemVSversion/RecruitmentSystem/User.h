#ifndef USERMANAGEMENT_USER_H
#define USERMANAGEMENT_USER_H
#include <iostream>
#include <string>

using namespace std;

/*
class : User
Description : ���� ������ ���� Entity Ŭ����
Author : ���Ѿ�
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
    Description : �ڽ� Ŭ������ Ÿ���� �ľ��ϱ� ���ؼ� ������ �����Լ�
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
