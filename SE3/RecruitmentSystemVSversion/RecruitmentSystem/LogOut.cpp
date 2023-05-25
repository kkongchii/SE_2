#ifndef USERMANAGEMENT_LOGOUT_CPP
#define USERMANAGEMENT_LOGOUT_CPP

#include "LogOut.h"

/*
Function: LogOut::LogOut()
Description: UI Class�� ���۷����� ��ȯ�ϴ� ������
ReturnType: X
Parameter: X
Author: �ڿ���
Created: 2023/05/25
*/
LogOut::LogOut() {
    this->logOutUI = new LogOutUI(this);
}

/*
Function: void LogOut::userLogout()
Description: Control Class���� �α׾ƿ��� ��û�ϴ� �Լ�
ReturnType: X
Parameter: X
Author: �ڿ���
Created: 2023/05/25
*/
void LogOut::userLogout() {
    extern UserList userDB;
    userDB.userStateChange(nullptr); 
}

/*
Function : LogOutUI* LogOut::getUI()
Description: ���� ���� UI�� ���۷����� ����
ReturnType: LogOutUI*
Parameter: X
Author: �ڿ���
Created: 2023/05/25
*/
LogOutUI* LogOut::getUI() {
    return this->logOutUI;
}

#endif //USERMANAGEMENT_LOGOUT_CPP


