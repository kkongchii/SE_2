#ifndef USERMANAGEMENT_LOGOUTUI_CPP
#define USERMANAGEMENT_LOGOUTUI_CPP

#include "LogOutUI.h"
#include <fstream>

/*
Function: LogOutUI::LogOutUI()
Description: Control Class�� ���۷����� ��ȯ�ϴ� ������
ReturnType: X
Parameter: X
Author: �ڿ���
Created: 2023/05/25
*/
LogOutUI::LogOutUI(LogOut* logoutControl) {
    this->logoutControl = logoutControl;
}

/*
Function: void LogOutUI::logout(ofstream& out_file)
Description: ���� �α��� �� ������ �α׾ƿ� �ϴ� �Լ�
ReturnType: X
Parameter: ofstream& out_file
Author: �ڿ���
Created: 2023/05/25
*/
void LogOutUI::logout(ofstream& out_file) {
    extern User* currentLoginUser;
    string id = currentLoginUser->getId();
    this->logoutControl->userLogout();
    out_file << "> " << id << endl;
}

/*
Function : LogOut* LogOutUI::getControl()
Description: ���� ���� Control Class�� ���۷����� ����
ReturnType: LogOut*
Parameter: X
Author: �ڿ���
Created: 2023/05/25
*/
LogOut* LogOutUI::getControl() {
    return this->logoutControl;
}

#endif //USERMANAGEMENT_LOGOUTUI_CPP


