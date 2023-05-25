#ifndef USERMANAGEMENT_LOGOUT_CPP
#define USERMANAGEMENT_LOGOUT_CPP

#include "LogOut.h"

LogOut::LogOut() {
    this->logOutUI = new LogOutUI(this);
}

void LogOut::userLogout() {
    extern UserList userDB;
    userDB.userStateChange(nullptr); 
}

LogOutUI* LogOut::getUI() {
    return this->logOutUI;
}

#endif //USERMANAGEMENT_LOGOUT_CPP


