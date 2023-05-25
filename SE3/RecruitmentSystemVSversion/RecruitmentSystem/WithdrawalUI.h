#ifndef USERMANAGEMENT_WITHDRAWALUI_H
#define USERMANAGEMENT_WITHDRAWALUI_H
#include <iostream>
#include <string>
#include "Withdrawal.h"

using namespace std;
class Withdrawal;

/*
Class : WithdrawalUI
Description: ȸ�� Ż�� ����� ������� ����ϴ� UI Ŭ����
Author: �ڿ���
Created: 2023/05/25
*/
class WithdrawalUI{
private:
    Withdrawal* withdrawalControl; 

public:
    WithdrawalUI(Withdrawal* withdrawalControl); 
    void startInterface();
    void withdrawalUser(ofstream& out_file, string id); 
    Withdrawal* getContol();
};
#endif //USERMANAGEMENT_WITHDRAWALUI_H