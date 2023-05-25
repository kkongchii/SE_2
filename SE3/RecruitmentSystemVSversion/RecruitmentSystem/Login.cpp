#ifndef USERMANAGEMENT_LOGIN_CPP
#define USERMANAGEMENT_LOGIN_CPP
#include "LogIn.h"

/*
Function: LogIn::LogIn()
Description: UI Class�� ���۷����� ��ȯ�ϴ� ������
ReturnType: X
Parameter: X
Author: �ڿ���
Created: 2023/05/25
*/
LogIn::LogIn() {
    this->logInUI = new LogInUI(this);
}

/*
Function: void LogIn::userLogin(string id, string pw)
Description: �Է� ���� id�� pw�� ���� �����ͺ��̽��� ��ȸ�ϴ� �Լ�
ReturnType: X
Parameter: string id, string pw
Author: �ڿ���
Created: 2023/05/25
*/
void LogIn::userLogin(string id, string pw) {
    extern UserList userDB; 
    User* user = userDB.userCheck(id, pw); 
    userDB.userStateChange(user); 
}

/*
Function : LogInUI* LogIn::getUI()
Description: ���� ���� UI�� ���۷����� ����
ReturnType: LogInUI*
Parameter: X
Author: �ڿ���
Created: 2023/05/25
*/
LogInUI* LogIn::getUI() {
    return this->logInUI;
}


#endif //USERMANAGEMENT_LOGIN_CPP

