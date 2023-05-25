#ifndef USERMANAGEMENT_SIGNUPUI_CPP
#define USERMANAGEMENT_SIGNUPUI_CPP

#include <fstream>
#include "SignUpUI.h"

using namespace std;

SignUpUI::SignUpUI(SignUp* signupControl) {
    this->signupControl = signupControl;
    // 매개변수로 받은 Control Class를 본인의 변수에 저장
}

void SignUpUI::startInterface() {
    // id와 pw를 입력하는 회원 가입 UI를 출력
    // 해당 과제에서는 미구현
}

void SignUpUI::signupGeneralUser(ofstream& out_file, string name, int personalNum, string id, string password) {
    if (signupControl->addGeneralUser(name, personalNum, id, password) == -1) {
        out_file << "> The same id exists." << endl;
        return;
    }
    out_file << "> 2 " << name << " " << personalNum << " " << id << " " << password << endl;
}

void SignUpUI::signupCompanyUser(ofstream& out_file, string name, int companyNum, string id, string password) {
    if (signupControl->addCompanyUser(name, companyNum, id, password) == -1) {
        out_file << "> The same id exists." << endl;
        return;
    }
    out_file << "> 2 " << name << " " << companyNum << " " << id << " " << password << endl;
}


SignUp* SignUpUI::getControl() {
    return this->signupControl;
}

#endif //USERMANAGEMENT_SIGNUPUI_CPP

