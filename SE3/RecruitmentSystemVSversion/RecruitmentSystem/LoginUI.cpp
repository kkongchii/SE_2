#ifndef USERMANAGEMENT_LOGINUI_CPP
#define USERMANAGEMENT_LOGINUI_CPP

#include "LogInUI.h"
#include <fstream>

/*
Function: LogInUI::LogInUI()
Description: Control Class와 레퍼런스를 교환하는 생성자
ReturnType: X
Parameter: LogIn* loginControl
Author: 박영빈
Created: 2023/05/25
*/
LogInUI::LogInUI(LogIn* loginControl) {
    this->loginControl = loginControl;
}

/*
Function: void LogInUI::startInterface()
Description: Interface를 출력하는 함수, 해당 과제에서는 미구현
ReturnType: X
Parameter: X
Author: 박영빈
Created: 2023/05/25
*/
void LogInUI::startInterface() {
    // id와 pw를 입력하는 login UI를 출력
    // 해당 과제에서는 미구현
}

/*
Function: void LogInUI::login(ofstream& out_file, string id, string pw)
Description: Control Class에게 로그인를 요청하는 함수
ReturnType: X
Parameter: ofstream& out_file, string id, string pw
Author: 박영빈
Created: 2023/05/25
*/
void LogInUI::login(ofstream& out_file, string id, string pw) {
    extern int isLogin;
    this->loginControl->userLogin(id, pw);

    if (isLogin == 0) {
        out_file << "User does not exist." << endl;
    }
    else {
        out_file << "> " << id << " " << pw << endl;
    }
}

/*
Function : LogIn* LogInUI::getControl()
Description: 보유 중인 Control Class의 레퍼런스를 리턴
ReturnType: LogIn*
Parameter: X
Author: 박영빈
Created: 2023/05/25
*/
LogIn* LogInUI::getControl() {
    return this->loginControl;
}

#endif //USERMANAGEMENT_LOGINUI_CPP



