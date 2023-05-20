#ifndef USERMANAGEMENT_LOGOUTUI_H
#define USERMANAGEMENT_LOGOUTUI_H
#include <iostream>
#include <string>
#include "LogOut.h"

using namespace std;
class LogOut;

class LogOutUI {
private:
public:
    LogOutUI(LogOut* logoutControl); // 생성자를 통해 Control Class와 레퍼런스 교환
    LogOut *logoutControl; // Control Class의 레퍼런스를 저장할 변수
    void logout(); // 사용자가 이용하는 UI의 로그아웃 함수
};
#endif //USERMANAGEMENT_LOGOUTUI_H