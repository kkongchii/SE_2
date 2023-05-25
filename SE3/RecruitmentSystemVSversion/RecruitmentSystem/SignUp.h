#ifndef USERMANAGEMENT_SIGNUP_H
#define USERMANAGEMENT_SIGNUP_H
#include <iostream>
#include "SignUpUI.h"

using namespace std;
class SignUpUI;

/*
Class : SignUp
Description: 회원 가입 기능을 담당하는 Control 클래스
Author: 박영빈
Created: 2023/05/25
*/
class SignUp{
private:
    SignUpUI* signupUI; 
public:
    SignUp(); 
    int addGeneralUser(string name, int personalNum, string id, string password);
    int addCompanyUser(string name, int companyNum, string id, string password);
    SignUpUI* getUI();
};
#endif //USERMANAGEMENT_SIGNUP_H