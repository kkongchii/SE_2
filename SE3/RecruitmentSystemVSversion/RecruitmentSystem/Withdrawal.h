#ifndef USERMANAGEMENT_WITHDRAWAL_H
#define USERMANAGEMENT_WITHDRAWAL_H
#include <iostream>
#include "WithdrawalUI.h"

using namespace std;
class WithdrawalUI;

/*
Class : Withdrawal
Description: ȸ�� Ż�� ����� ����ϴ� Control Ŭ����
Author: �ڿ���
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