#ifndef USERMANAGEMENT_LOGOUTUI_CPP
#define USERMANAGEMENT_LOGOUTUI_CPP

#include "LogOutUI.h"

LogOutUI::LogOutUI(LogOut *logoutControl) {
    this->logoutControl = logoutControl;
    // 매개변수로 받은 Control Class를 본인의 변수에 저장
}

void LogOutUI::logout(FILE* fp) {
    extern User* currentLoginUser; // main 함수의 currentLoginUser를 사용
    string id = currentLoginUser->getId(); // 현재 로그인 한 유저의 id
    this->logoutControl->userLogout(); // Control Class에 로그아웃 요청, 1.1.userLogout()
    fprintf(fp, "> %s\n", id.c_str());
}

LogOut *LogOutUI::getControl() {
    return this->logoutControl;
}

#endif //USERMANAGEMENT_LOGOUTUI_CPP


