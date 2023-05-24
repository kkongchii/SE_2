#ifndef USERMANAGEMENT_SIGNUPUI_CPP
#define USERMANAGEMENT_SIGNUPUI_CPP

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

void SignUpUI::signupGeneralUser(FILE* fp, string name, int personalNum, string id, string password) {
    if (signupControl->addGeneralUser(name, personalNum, id, password) == -1) {
        // Control Class에 일반 유저 생성 요청 후 입력한 id와 동일한 id가 userDB에 존재 시.
        fprintf(fp, "> The same id exists.\n");// 중복을 알림
        return;
    }
    fprintf(fp, "> 2 %s %d %s %s\n", name.c_str(), personalNum, id.c_str(), password.c_str());
}

void SignUpUI::signupCompanyUser(FILE* fp, string name, int companyNum, string id, string password) {
    if (signupControl->addCompanyUser(name, companyNum, id, password) == -1) {
        // Control Class에 회사 유저 생성 요청 후 입력한 id와 동일한 id가 userDB에 존재 시.
        fprintf(fp, "> The same id exists.\n");// 중복을 알림
        return;
    }
    fprintf(fp, "> 2 %s %d %s %s\n", name.c_str(), companyNum, id.c_str(), password.c_str());
}

SignUp* SignUpUI::getControl() {
    return this->signupControl;
}

#endif //USERMANAGEMENT_SIGNUPUI_CPP

