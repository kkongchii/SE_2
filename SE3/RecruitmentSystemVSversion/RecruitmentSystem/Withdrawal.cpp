#ifndef USERMANAGEMENT_WITHDRAWAL_CPP
#define USERMANAGEMENT_WITHDRAWAL_CPP

#include "Withdrawal.h"
#include "UserList.h"

/*
Function : Withdrawal::Withdrawal()
Description: UI Class와 레퍼런스를 교환하는 생성자
ReturnType: X
Parameter: X
Author: 박영빈
Created: 2023/05/25
*/
Withdrawal::Withdrawal() {
    this->withdrawalUI = new WithdrawalUI(this);
}

/*
Function : void Withdrawal::deleteUser(string id)
Description: 해당 id에 해당하는 유저를 삭제하는 함수
ReturnType: X
Parameter: string id
Author: 박영빈
Created: 2023/05/25
*/
void Withdrawal::deleteUser(string id) {
    extern UserList userDB; 
    userDB.deleteUser(id); 
}

/*
Function : WithdrawalUI* Withdrawal::getUI()
Description: 보유 중인 UI Class의 레퍼런스를 리턴
ReturnType: WithdrawalUI*
Parameter: X
Author: 박영빈
Created: 2023/05/25
*/
WithdrawalUI* Withdrawal::getUI() {
    return this->withdrawalUI;
}

#endif //USERMANAGEMENT_WITHDRAWAL_CPP

