#ifndef USERMANAGEMENT_LOGOUT_CPP
#define USERMANAGEMENT_LOGOUT_CPP

#include "LogOut.h"

/*
Function: LogOut::LogOut()
Description: UI Class와 레퍼런스를 교환하는 생성자
ReturnType: X
Parameter: X
Author: 박영빈
Created: 2023/05/25
*/
LogOut::LogOut() {
    this->logOutUI = new LogOutUI(this);
}

/*
Function: void LogOut::userLogout()
Description: Control Class에게 로그아웃를 요청하는 함수
ReturnType: X
Parameter: X
Author: 박영빈
Created: 2023/05/25
*/
void LogOut::userLogout() {
    extern UserList userDB;
    userDB.userStateChange(nullptr); 
}

/*
Function : LogOutUI* LogOut::getUI()
Description: 보유 중인 UI의 레퍼런스를 리턴
ReturnType: LogOutUI*
Parameter: X
Author: 박영빈
Created: 2023/05/25
*/
LogOutUI* LogOut::getUI() {
    return this->logOutUI;
}

#endif //USERMANAGEMENT_LOGOUT_CPP


