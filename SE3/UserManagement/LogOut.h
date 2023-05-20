#ifndef USERMANAGEMENT_LOGOUT_H
#define USERMANAGEMENT_LOGOUT_H
#include <iostream>
#include <vector>
#include "UserList.h"
#include "LogOutUI.h"

class LogOutUI;

class LogOut{
private:
public:
    LogOutUI* logOutUI; // UI Class를 저장할 변수
    LogOut(); // 생성자
    void userLogout(); // UI가 이용하는 Control의 로그아웃 함수

};
#endif //USERMANAGEMENT_LOGOUT_H