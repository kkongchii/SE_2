#ifndef USERMANAGEMENT_LOGOUTUI_H
#define USERMANAGEMENT_LOGOUTUI_H
#include <iostream>
#include <string>
#include "LogOut.h"

using namespace std;
class LogOut;

/*
Class: LogOutUI
Description: �α׾ƿ� ����� ������� ����ϴ� UI Ŭ����
Author: �ڿ���
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