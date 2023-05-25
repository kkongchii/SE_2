#ifndef USERMANAGEMENT_LOGIN_H
#define USERMANAGEMENT_LOGIN_H
#include <iostream>
#include <vector>
#include "UserList.h"
#include "LogInUI.h"

class LogInUI;

class LogIn{
private:
    LogInUI* logInUI; 
public:
    LogIn(); 
    void userLogin(string id, string pw);
    LogInUI* getUI(); // getter
};
#endif //USERMANAGEMENT_LOGIN_H

