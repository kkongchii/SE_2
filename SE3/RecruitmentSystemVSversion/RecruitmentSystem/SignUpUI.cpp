#ifndef USERMANAGEMENT_SIGNUPUI_CPP
#define USERMANAGEMENT_SIGNUPUI_CPP

#include <fstream>
#include "SignUpUI.h"

using namespace std;

/*
Function: SignUpUI::SignUpUI(SignUp* signupControl)
Description: UI Class와 레퍼런스를 교환하는 생성자
ReturnType: X
Parameter: SignUp* signupControl
Author: 박영빈
Created: 2023/05/25
*/

SignUpUI::SignUpUI(SignUp* signupControl) {
    this->signupControl = signupControl;
}

/*
Function: void SignUpUI::startInterface()
Description: Interface를 출력하는 함수, 해당 과제에서는 미구현
ReturnType: X
Parameter: X
Author: 박영빈
Created: 2023/05/25
*/
void SignUpUI::startInterface() {
    // id와 pw를 입력하는 회원 가입 UI를 출력
    // 해당 과제에서는 미구현
}

/*
Function: void SignUpUI::signupGeneralUser(ofstream& out_file, string name, int personalNum, string id, string password)
Description: Control Class에게 일반 회원 가입을 요청하는 함수
ReturnType: X
Parameter: ofstream& out_file, string name, int personalNum, string id, string password
Author: 박영빈
Created: 2023/05/25
*/
void SignUpUI::signupGeneralUser(ofstream& out_file, string name, int personalNum, string id, string password) {
    if (signupControl->addGeneralUser(name, personalNum, id, password) == -1) {
        out_file << "> The same id exists." << endl;
        return;
    }
    out_file << "> 2 " << name << " " << personalNum << " " << id << " " << password << endl;
}

/*
Function: void SignUpUI::signupCompanyUser(ofstream& out_file, string name, int companyNum, string id, string password)
Description: Control Class에게 회사 회원 가입을 요청하는 함수
ReturnType: X
Parameter: ofstream& out_file, string name, int companyNum, string id, string password
Author: 박영빈
Created: 2023/05/25
*/
void SignUpUI::signupCompanyUser(ofstream& out_file, string name, int companyNum, string id, string password) {
    if (signupControl->addCompanyUser(name, companyNum, id, password) == -1) {
        out_file << "> The same id exists." << endl;
        return;
    }
    out_file << "> 1 " << name << " " << companyNum << " " << id << " " << password << endl;
}

/*
Function : SignUp* SignUpUI::getControl()
Description: 보유 중인 Control Class의 레퍼런스를 리턴
ReturnType: SignUp*
Parameter: X
Author: 박영빈
Created: 2023/05/25
*/
SignUp* SignUpUI::getControl() {
    return this->signupControl;
}

#endif //USERMANAGEMENT_SIGNUPUI_CPP

