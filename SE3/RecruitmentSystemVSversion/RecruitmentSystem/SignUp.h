#ifndef USERMANAGEMENT_SIGNUP_H
#define USERMANAGEMENT_SIGNUP_H
#include <iostream>
#include "SignUpUI.h"

using namespace std;
class SignUpUI;

class SignUp{
private:
    SignUpUI* signupUI; // UI Class를 저장할 변수
public:
    SignUp(); // 생성자
    int addGeneralUser(string name, int personalNum, string id, string password);
    // UI가 이용하는 Control의 일반 회원 가입 함수
    int addCompanyUser(string name, int companyNum, string id, string password);
    // UI가 이용하는 Control의 회사 회원 가입 함수
    SignUpUI* getUI(); // getter
};
#endif //USERMANAGEMENT_SIGNUP_H