#ifndef USERMANAGEMENT_WITHDRAWALUI_CPP
#define USERMANAGEMENT_WITHDRAWALUI_CPP

#include "WithdrawalUI.h"
#include <fstream>

WithdrawalUI::WithdrawalUI(Withdrawal* withdrawalControl) {
    this->withdrawalControl = withdrawalControl;
}

void WithdrawalUI::startInterface() {
    // 탈퇴 여부를 입력받는 withdrawal UI를 출력
    // 해당 과제에서는 미구현
}

void WithdrawalUI::withdrawalUser(ofstream& out_file, string id) {
    this->withdrawalControl->deleteUser(id);
    out_file << "> " << id << endl;
}


Withdrawal* WithdrawalUI::getContol() {
    return this->withdrawalControl;
}

#endif //USERMANAGEMENT_WITHDRAWALUI_CPP


