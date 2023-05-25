#ifndef USERMANAGEMENT_LOGOUT_H
#define USERMANAGEMENT_LOGOUT_H
#include <iostream>
#include <vector>
#include "UserList.h"
#include "LogOutUI.h"

class LogOutUI;

/*
Class: LogOut
Description: 로그아웃을 담당하는 Control 클래스
Author: 박영빈
Created: 2023/05/25
*/
class LogOut{
private:
    LogOutUI* logOutUI; 
public:
    LogOut(); 
    void userLogout();
    LogOutUI* getUI();

};
#endif //USERMANAGEMENT_LOGOUT_H