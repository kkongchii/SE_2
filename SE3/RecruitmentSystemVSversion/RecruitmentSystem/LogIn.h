#ifndef USERMANAGEMENT_LOGIN_H
#define USERMANAGEMENT_LOGIN_H
#include <iostream>
#include <vector>
#include "UserList.h"
#include "LogInUI.h"

class LogInUI;

/*
Class: LogIn
Description: 로그인을 담당하는 Control 클래스
Author: 박영빈
Created: 2023/05/25
*/
class LogIn{
private:
    LogInUI* logInUI; 
public:
    LogIn(); 
    void userLogin(string id, string pw);
    LogInUI* getUI(); 
};
#endif //USERMANAGEMENT_LOGIN_H

