#ifndef USERMANAGEMENT_WITHDRAWAL_H
#define USERMANAGEMENT_WITHDRAWAL_H
#include <iostream>
#include "WithdrawalUI.h"

using namespace std;
class WithdrawalUI;

/*
Class : Withdrawal
Description: 회원 탈퇴 기능을 담당하는 Control 클래스
Author: 박영빈
Created: 2023/05/25
*/
class Withdrawal{
private:
    WithdrawalUI* withdrawalUI;
public:
    Withdrawal(); 
    void deleteUser(string id); 
    WithdrawalUI* getUI(); 
};
#endif //USERMANAGEMENT_WITHDRAWAL_H