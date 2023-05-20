#ifndef USERMANAGEMENT_SIGNUP_CPP
#define USERMANAGEMENT_SIGNUP_CPP

#include "SignUp.h"
#include "UserList.h"

SignUp::SignUp(){
    this->signupUI = new SignUpUI(this);
    // UI Class를 생성하여 본인의 멤버 변수에 저장, 레퍼런스 교환
}

int SignUp::addGeneralUser(string name, int personalNum, string id, string password){
    extern UserList userDB; // main 함수에 선언 된 userDB 사용
    int result = userDB.createGeneralUser(name, personalNum, id, password);
    // 일반 유저 생성 후 결과를 저장, 중복 id로 실패 시 -1 반환, 2.1.1.createGeneralUser()
    return result;
}

int SignUp::addCompanyUser(string name, int companyNum, string id, string password) {
    extern UserList userDB; // main 함수에 선언 된 userDB 사용
    int result = userDB.createCompanyUser(name, companyNum, id, password);
    // 회사 유저 생성 후 결과를 저장, 중복 id로 실패 시 -1 반환, 2.1.1.createCompanyUser()
    return result;
}

SignUpUI *SignUp::getUI() {
    return this->signupUI;
}

#endif //USERMANAGEMENT_SIGNUP_CPP


