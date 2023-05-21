#ifndef USERMANAGEMENT_LOGIN_CPP
#define USERMANAGEMENT_LOGIN_CPP
#include "LogIn.h"

LogIn::LogIn() {
    this->logInUI = new LogInUI(this);
    // UI Class를 생성하여 본인의 멤버 변수에 저장, 레퍼런스 교환
}

void LogIn::userLogin(string id, string pw) {
    extern UserList userDB; // main 함수에 선언 된 userDB 사용
    User* user = userDB.userCheck(id, pw); // UserList에 회원 확인 요청, 2.1.1.userCheck()
    userDB.userStateChange(user); // UserList에 회원 상태 갱신 요청, 2.1.2.userStateChange()
}

LogInUI *LogIn::getUI() {
    return this->logInUI;
}


#endif //USERMANAGEMENT_LOGIN_CPP

