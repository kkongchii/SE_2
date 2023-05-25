#ifndef USERMANAGEMENT_LOGIN_CPP
#define USERMANAGEMENT_LOGIN_CPP
#include "LogIn.h"

/*
Function: LogIn::LogIn()
Description: UI Class와 레퍼런스를 교환하는 생성자
ReturnType: X
Parameter: X
Author: 박영빈
Created: 2023/05/25
*/
LogIn::LogIn() {
    this->logInUI = new LogInUI(this);
}

/*
Function: void LogIn::userLogin(string id, string pw)
Description: 입력 받은 id와 pw를 유저 데이터베이스에 조회하는 함수
ReturnType: X
Parameter: string id, string pw
Author: 박영빈
Created: 2023/05/25
*/
void LogIn::userLogin(string id, string pw) {
    extern UserList userDB; 
    User* user = userDB.userCheck(id, pw); 
    userDB.userStateChange(user); 
}

/*
Function : LogInUI* LogIn::getUI()
Description: 보유 중인 UI의 레퍼런스를 리턴
ReturnType: LogInUI*
Parameter: X
Author: 박영빈
Created: 2023/05/25
*/
LogInUI* LogIn::getUI() {
    return this->logInUI;
}


#endif //USERMANAGEMENT_LOGIN_CPP

