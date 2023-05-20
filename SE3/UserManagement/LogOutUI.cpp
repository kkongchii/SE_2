#ifndef USERMANAGEMENT_LOGOUTUI_CPP
#define USERMANAGEMENT_LOGOUTUI_CPP

#include "LogOutUI.h"

LogOutUI::LogOutUI(LogOut *logoutControl) {
    this->logoutControl = logoutControl;
    // 매개변수로 받은 Control Class를 본인의 변수에 저장
}

void LogOutUI::logout() {
    extern User* currentLoginUser; // main 함수의 currentLoginUser를 사용
    string id = currentLoginUser->getId(); // 현재 로그인 한 유저의 id
    this->logoutControl->userLogout(); // Control Class에 로그아웃 요청, 1.1.userLogout()
    cout << "User " << id << " have been logged out.\n" << endl; // 디버깅용 출력문
    cout << "> " << id << endl; // 출력 양식
}

#endif //USERMANAGEMENT_LOGOUTUI_CPP


