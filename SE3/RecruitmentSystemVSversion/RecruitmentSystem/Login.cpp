#ifndef USERMANAGEMENT_LOGIN_CPP
#define USERMANAGEMENT_LOGIN_CPP
#include "LogIn.h"

LogIn::LogIn() {
    this->logInUI = new LogInUI(this);
}

void LogIn::userLogin(string id, string pw) {
    extern UserList userDB; 
    User* user = userDB.userCheck(id, pw); 
    userDB.userStateChange(user); 
}

LogInUI* LogIn::getUI() {
    return this->logInUI;
}


#endif //USERMANAGEMENT_LOGIN_CPP

