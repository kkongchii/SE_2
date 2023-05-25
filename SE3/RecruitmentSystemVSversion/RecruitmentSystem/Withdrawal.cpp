#ifndef USERMANAGEMENT_WITHDRAWAL_CPP
#define USERMANAGEMENT_WITHDRAWAL_CPP

#include "Withdrawal.h"
#include "UserList.h"

/*
Function : Withdrawal::Withdrawal()
Description: UI Class�� ���۷����� ��ȯ�ϴ� ������
ReturnType: X
Parameter: X
Author: �ڿ���
Created: 2023/05/25
*/
Withdrawal::Withdrawal() {
    this->withdrawalUI = new WithdrawalUI(this);
}

/*
Function : void Withdrawal::deleteUser(string id)
Description: �ش� id�� �ش��ϴ� ������ �����ϴ� �Լ�
ReturnType: X
Parameter: string id
Author: �ڿ���
Created: 2023/05/25
*/
void Withdrawal::deleteUser(string id) {
    extern UserList userDB; 
    userDB.deleteUser(id); 
}

/*
Function : WithdrawalUI* Withdrawal::getUI()
Description: ���� ���� UI Class�� ���۷����� ����
ReturnType: WithdrawalUI*
Parameter: X
Author: �ڿ���
Created: 2023/05/25
*/
WithdrawalUI* Withdrawal::getUI() {
    return this->withdrawalUI;
}

#endif //USERMANAGEMENT_WITHDRAWAL_CPP

