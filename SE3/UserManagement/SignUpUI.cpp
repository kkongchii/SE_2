#ifndef USERMANAGEMENT_SIGNUPUI_CPP
#define USERMANAGEMENT_SIGNUPUI_CPP

#include "SignUpUI.h"

using namespace std;

SignUpUI::SignUpUI(SignUp *signupControl) {
    this->signupControl = signupControl;
    // 매개변수로 받은 Control Class를 본인의 변수에 저장
}

void SignUpUI::startInterface() {
    cout << "start Interface" << endl;
    // id와 pw를 입력하는 login UI를 출력
    // 해당 과제에서는 미구현
}

void SignUpUI::signupGeneralUser(string name, int personalNum, string id, string password) {
    if(signupControl->addGeneralUser(name, personalNum, id, password) == -1){
        // Control Class에 일반 유저 생성 요청 후 입력한 id와 동일한 id가 userDB에 존재 시.
        cout << "The same id exists." << endl; // 중복을 알림
        return;
    }
    cout << "General user with id \"" << id << "\" has been created." << endl; // 디버깅용 출력문
    cout << "> 2 " << name << ' ' << personalNum << ' ' << id << ' ' << password << endl; // 출력 양식
}

void SignUpUI::signupCompanyUser(string name, int companyNum, string id, string password) {
    if(signupControl->addCompanyUser(name, companyNum, id, password) == -1){
        // Control Class에 회사 유저 생성 요청 후 입력한 id와 동일한 id가 userDB에 존재 시.
        cout << "The same id exists." << endl; // 중복을 알림
        return;
    }
    cout << "Company user with id \"" << id << "\" has been created." << endl; // 디버깅용 출력문
    cout << "> 1 " << name << ' ' << companyNum << ' ' << id << ' ' << password << endl; // 출력 양식
}

SignUp *SignUpUI::getControl() {
    return this->signupControl;
}

#endif //USERMANAGEMENT_SIGNUPUI_CPP

