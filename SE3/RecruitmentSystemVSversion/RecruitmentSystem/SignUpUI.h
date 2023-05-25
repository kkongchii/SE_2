#ifndef USERMANAGEMENT_SIGNUPUI_H
#define USERMANAGEMENT_SIGNUPUI_H
#include <iostream>
#include <string>
#include "SignUp.h"

using namespace std;
class SignUp;

/*
Class : SignUpUI
Description: 회원 가입 기능의 입출력을 담당하는 UI 클래스
Author: 박영빈
Created: 2023/05/25
*/
class SignUpUI{
private:
    SignUp* signupControl; 
public:
    SignUpUI(SignUp* signupControl); 
    void startInterface();
    void signupGeneralUser(ofstream& out_file, string name, int personalNum, string id, string password); 
    void signupCompanyUser(ofstream& out_file, string name, int companyNum, string id, string password); 
    SignUp* getControl(); 
};
#endif //USERMANAGEMENT_SIGNUPUI_H