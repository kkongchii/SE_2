#ifndef USERMANAGEMENT_WITHDRAWALUI_CPP
#define USERMANAGEMENT_WITHDRAWALUI_CPP

#include "WithdrawalUI.h"

WithdrawalUI::WithdrawalUI(Withdrawal* withdrawalControl) {
    this->withdrawalControl = withdrawalControl;
    // 매개변수로 받은 Control Class를 본인의 변수에 저장
}

void WithdrawalUI::startInterface() {
    // 탈퇴 여부를 입력받는 withdrawal UI를 출력
    // 해당 과제에서는 미구현
}

void WithdrawalUI::withdrawalUser(FILE* fp, string id) {
    this->withdrawalControl->deleteUser(id); // Control Class에 회원 삭제 요청, 2.1.deleteUser()
    fprintf(fp, "> %s\n", id.c_str());
}

Withdrawal* WithdrawalUI::getContol() {
    return this->withdrawalControl;
}

#endif //USERMANAGEMENT_WITHDRAWALUI_CPP


