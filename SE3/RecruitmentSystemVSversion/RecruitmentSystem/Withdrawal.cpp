#ifndef USERMANAGEMENT_WITHDRAWAL_CPP
#define USERMANAGEMENT_WITHDRAWAL_CPP

#include "Withdrawal.h"
#include "UserList.h"

Withdrawal::Withdrawal() {
    this->withdrawalUI = new WithdrawalUI(this);
}

void Withdrawal::deleteUser(string id) {
    extern UserList userDB; 
    userDB.deleteUser(id); 
}

WithdrawalUI* Withdrawal::getUI() {
    return this->withdrawalUI;
}

#endif //USERMANAGEMENT_WITHDRAWAL_CPP

