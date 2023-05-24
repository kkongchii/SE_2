#ifndef USERMANAGEMENT_LOGOUT_CPP
#define USERMANAGEMENT_LOGOUT_CPP

#include "LogOut.h"

LogOut::LogOut() {
    this->logOutUI = new LogOutUI(this);
    // UI Class를 생성하여 본인의 멤버 변수에 저장, 레퍼런스 교환
}

void LogOut::userLogout() {
    extern UserList userDB; // main 함수에 선언 된 userDB 사용
    userDB.userStateChange(nullptr); // UserList에 상태 갱신 요청, 1.1.1.userStateChange()
}

LogOutUI* LogOut::getUI() {
    return this->logOutUI;
}

#endif //USERMANAGEMENT_LOGOUT_CPP


