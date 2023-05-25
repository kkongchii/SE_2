#ifndef USERMANAGEMENT_LOGOUTUI_CPP
#define USERMANAGEMENT_LOGOUTUI_CPP

#include "LogOutUI.h"
#include <fstream>

/*
Function: LogOutUI::LogOutUI()
Description: Control Class와 레퍼런스를 교환하는 생성자
ReturnType: X
Parameter: X
Author: 박영빈
Created: 2023/05/25
*/
LogOutUI::LogOutUI(LogOut* logoutControl) {
    this->logoutControl = logoutControl;
}

/*
Function: void LogOutUI::logout(ofstream& out_file)
Description: 현재 로그인 된 유저를 로그아웃 하는 함수
ReturnType: X
Parameter: ofstream& out_file
Author: 박영빈
Created: 2023/05/25
*/
void LogOutUI::logout(ofstream& out_file) {
    extern User* currentLoginUser;
    string id = currentLoginUser->getId();
    this->logoutControl->userLogout();
    out_file << "> " << id << endl;
}

/*
Function : LogOut* LogOutUI::getControl()
Description: 보유 중인 Control Class의 레퍼런스를 리턴
ReturnType: LogOut*
Parameter: X
Author: 박영빈
Created: 2023/05/25
*/
LogOut* LogOutUI::getControl() {
    return this->logoutControl;
}

#endif //USERMANAGEMENT_LOGOUTUI_CPP


