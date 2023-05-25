#ifndef USERMANAGEMENT_LOGINUI_H
#define USERMANAGEMENT_LOGINUI_H

#include <iostream>
#include <string>
#include "LogIn.h"

using namespace std;
class LogIn;

/*
Class: LogInUI::LogInUI()
Description: 로그인 기능의 입출력을 담당하는 UI 클래스
Author: 박영빈
Created: 2023/05/25
*/
class LogInUI {
private:
    LogIn *loginControl; 
public:
    LogInUI(LogIn* loginControl); 
    void startInterface(); 
    void login(ofstream& out_file, string id, string pw); 
    LogIn* getControl(); 
};

#endif //USERMANAGEMENT_LOGINUI_H


