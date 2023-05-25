#ifndef USERMANAGEMENT_LOGOUTUI_H
#define USERMANAGEMENT_LOGOUTUI_H
#include <iostream>
#include <string>
#include "LogOut.h"

using namespace std;
class LogOut;

/*
Class: LogOutUI
Description: 로그아웃 기능의 입출력을 담당하는 UI 클래스
Author: 박영빈
Created: 2023/05/25
*/
class LogOutUI {
private:
    LogOut* logoutControl; 
public:
    LogOutUI(LogOut* logoutControl); 
    void logout(ofstream& out_file); 
    LogOut* getControl(); 
};
#endif //USERMANAGEMENT_LOGOUTUI_H