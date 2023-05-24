#ifndef USERMANAGEMENT_WITHDRAWAL_CPP
#define USERMANAGEMENT_WITHDRAWAL_CPP

#include "Withdrawal.h"
#include "UserList.h"

Withdrawal::Withdrawal() {
    this->withdrawalUI = new WithdrawalUI(this);
    // UI Class를 생성하여 본인의 멤버 변수에 저장, 레퍼런스 교환
}

void Withdrawal::deleteUser(string id) {
    extern UserList userDB; // main 함수에 선언 된 userDB 사용
    userDB.deleteUser(id); // UserList에 회원 삭제 요청, 2.1.1.deleteUser()
}

WithdrawalUI* Withdrawal::getUI() {
    return this->withdrawalUI;
}

#endif //USERMANAGEMENT_WITHDRAWAL_CPP

