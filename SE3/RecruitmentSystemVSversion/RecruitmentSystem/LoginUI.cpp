#ifndef USERMANAGEMENT_LOGINUI_CPP
#define USERMANAGEMENT_LOGINUI_CPP

#include "LogInUI.h"
#include <fstream>

LogInUI::LogInUI(LogIn* loginControl) {
    this->loginControl = loginControl;
    // 매개변수로 받은 Control Class를 본인의 변수에 저장
}

void LogInUI::startInterface() {
    // id와 pw를 입력하는 login UI를 출력
    // 해당 과제에서는 미구현
}

void LogInUI::login(std::ofstream& out_file, string id, string pw) {
    extern int isLogin;
    this->loginControl->userLogin(id, pw);

    if (isLogin == 0) {
        out_file << "User does not exist." << endl;
    }
    else {
        out_file << "> " << id << " " << pw << endl;
    }
}


LogIn* LogInUI::getControl() {
    return this->loginControl;
}

#endif //USERMANAGEMENT_LOGINUI_CPP



