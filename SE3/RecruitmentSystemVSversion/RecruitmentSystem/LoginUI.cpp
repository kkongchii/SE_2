#ifndef USERMANAGEMENT_LOGINUI_CPP
#define USERMANAGEMENT_LOGINUI_CPP

#include "LogInUI.h"

LogInUI::LogInUI(LogIn* loginControl) {
    this->loginControl = loginControl;
    // 매개변수로 받은 Control Class를 본인의 변수에 저장
}

void LogInUI::startInterface() {
    cout << "start Interface" << endl;
    // id와 pw를 입력하는 login UI를 출력
    // 해당 과제에서는 미구현
}

void LogInUI::login(string id, string pw) {
    extern int isLogin; // main 함수의 isLogin 사용
    this->loginControl->userLogin(id, pw); // Control Class에 로그인 요청, 2.1.userLogin()
    if (isLogin == 0) { // 로그인 실패 시
        cout << "User does not exist." << endl; // 로그인 실패를 알림
    }
    else if (isLogin == 1) { // 회사 회원일 시
        cout << "Company user " << id << " is logged in." << endl; // 디버깅용 출력문
        cout << "> " << id << ' ' << pw << endl; // 출력 양식
    }
    else if (isLogin == 2) { // 일반 회원일 시
        cout << "General user " << id << " is logged in." << endl; // 디버깅용 출력문
        cout << "> " << id << ' ' << pw << endl; // 출력 양식
    }
}

LogIn* LogInUI::getControl() {
    return this->loginControl;
}

#endif //USERMANAGEMENT_LOGINUI_CPP



