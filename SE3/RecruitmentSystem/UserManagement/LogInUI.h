#ifndef USERMANAGEMENT_LOGINUI_H
#define USERMANAGEMENT_LOGINUI_H

#include <iostream>
#include <string>
#include "LogIn.h"

using namespace std;
class LogIn;

class LogInUI {
private:
    LogIn *loginControl; // Control Class의 레퍼런스를 저장할 변수
public:
    LogInUI(LogIn* loginControl); // 생성자를 통해 Control Class와 레퍼런스 교환
    void startInterface(); // interface를 출력하는 함수
    void login(string id, string pw); // 사용자가 이용하는 UI의 로그인 함수
    LogIn* getControl(); // getter
};

#endif //USERMANAGEMENT_LOGINUI_H


