#ifndef USERMANAGEMENT_LOGINUI_H
#define USERMANAGEMENT_LOGINUI_H

#include <iostream>
#include <string>
#include "LogIn.h"

using namespace std;
class LogIn;

/*
Class: LogInUI::LogInUI()
Description: �α��� ����� ������� ����ϴ� UI Ŭ����
Author: �ڿ���
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


