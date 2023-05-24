#ifndef USERMANAGEMENT_SIGNUPUI_H
#define USERMANAGEMENT_SIGNUPUI_H
#include <iostream>
#include <string>
#include "SignUp.h"

using namespace std;
class SignUp;

class SignUpUI{
private:
    SignUp* signupControl; // Control Class의 레퍼런스를 저장할 변수
public:
    SignUpUI(SignUp* signupControl); // 생성자를 통해 Control Class와 레퍼런스 교환
    void startInterface(); // interface를 출력하는 함수
    void signupGeneralUser(FILE* fp, string name, int personalNum, string id, string password); // 사용자가 이용하는 UI의 일반 회원 가입 함수
    void signupCompanyUser(FILE* fp, string name, int companyNum, string id, string password); // 사용자가 이용하는 UI의 회사 회원 가입 함수
    SignUp* getControl(); // getter
};
#endif //USERMANAGEMENT_SIGNUPUI_H