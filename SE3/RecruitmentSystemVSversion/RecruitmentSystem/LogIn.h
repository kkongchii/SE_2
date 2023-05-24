#ifndef USERMANAGEMENT_LOGIN_H
#define USERMANAGEMENT_LOGIN_H
#include <iostream>
#include <vector>
#include "UserList.h"
#include "LogInUI.h"

class LogInUI;

class LogIn {
private:
    LogInUI* logInUI; // UI Class를 저장할 변수
public:
    LogIn(); // 생성자
    void userLogin(string id, string pw); // UI가 이용하는 Control의 로그인 함수
    LogInUI* getUI(); // getter
};
#endif //USERMANAGEMENT_LOGIN_H

