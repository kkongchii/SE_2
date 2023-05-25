#ifndef USERMANAGEMENT_LOGOUTUI_CPP
#define USERMANAGEMENT_LOGOUTUI_CPP

#include "LogOutUI.h"
#include <fstream>


LogOutUI::LogOutUI(LogOut *logoutControl) {
    this->logoutControl = logoutControl;
    // 매개변수로 받은 Control Class를 본인의 변수에 저장
}

void LogOutUI::logout(ofstream& out_file) {
    extern User* currentLoginUser;
    string id = currentLoginUser->getId();
    this->logoutControl->userLogout();
    out_file << "> " << id << endl;
}


LogOut *LogOutUI::getControl() {
    return this->logoutControl;
}

#endif //USERMANAGEMENT_LOGOUTUI_CPP


