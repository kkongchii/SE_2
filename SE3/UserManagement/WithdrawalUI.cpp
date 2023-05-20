#ifndef USERMANAGEMENT_WITHDRAWALUI_CPP
#define USERMANAGEMENT_WITHDRAWALUI_CPP

#include "WithdrawalUI.h"

WithdrawalUI::WithdrawalUI(Withdrawal *withdrawalControl) {
    this->withdrawalControl = withdrawalControl;
    // 매개변수로 받은 Control Class를 본인의 변수에 저장
}

void WithdrawalUI::startInterface() {
    cout << "start Interface" << endl;
    // 탈퇴 여부를 입력받는 withdrawal UI를 출력
    // 해당 과제에서는 미구현
}

void WithdrawalUI::withdrawalUser(string id) {
    this->withdrawalControl->deleteUser(id); // Control Class에 회원 삭제 요청, 2.1.deleteUser()
    cout << "User " << id << " have successfully withdrawn.\n" << endl; // 디버깅용 출력문
    cout << "> " << id << endl; // 출력 양식
}

#endif //USERMANAGEMENT_WITHDRAWALUI_CPP


