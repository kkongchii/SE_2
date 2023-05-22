#ifndef USERMANAGEMENT_USER_H
#define USERMANAGEMENT_USER_H
#include <iostream>
#include <string>

using namespace std;

class User{
private:
    string name;
    string id;
    string password;
public:
    User(string name, string id, string pw); // User Class 생성자, 당장 쓸 일은 없음
    virtual ~User();
    virtual string getClassType() = 0; // 자식 클래스의 타입을 파악하기 위해서 선언한 가상함수
    string getName();
    string getId();
    string getPW();
    void setName(string name);
    void setId(string id);
    void setPW(string id);
    // 이상 getter, setter
};

#endif //USERMANAGEMENT_USER_H
