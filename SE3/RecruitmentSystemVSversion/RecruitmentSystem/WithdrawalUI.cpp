#ifndef USERMANAGEMENT_WITHDRAWALUI_CPP
#define USERMANAGEMENT_WITHDRAWALUI_CPP

#include "WithdrawalUI.h"
#include <fstream>

/*
Function: WithdrawalUI::WithdrawalUI(Withdrawal* withdrawalControl)
Description: UI Class와 레퍼런스를 교환하는 생성자
ReturnType: X
Parameter: Withdrawal* withdrawalControl
Author: 박영빈
Created: 2023/05/25
*/
WithdrawalUI::WithdrawalUI(Withdrawal* withdrawalControl) {
    this->withdrawalControl = withdrawalControl;
}

/*
Function: void WithdrawalUI::startInterface()
Description: Interface를 출력하는 함수, 해당 과제에서는 미구현
ReturnType: X
Parameter: X
Author: 박영빈
Created: 2023/05/25
*/
void WithdrawalUI::startInterface() {
    // 탈퇴 여부를 입력받는 withdrawal UI를 출력
    // 해당 과제에서는 미구현
}

/*
Function: void WithdrawalUI::withdrawalUser(ofstream& out_file, string id)
Description: Control Class에게 회원 탈퇴를 요청하는 함수
ReturnType: X
Parameter: ofstream& out_file, string id
Author: 박영빈
Created: 2023/05/25
*/
void WithdrawalUI::withdrawalUser(ofstream& out_file, string id) {
    this->withdrawalControl->deleteUser(id);
    out_file << "> " << id << endl;
}

/*
Function : Withdrawal* WithdrawalUI::getContol()
Description: 보유 중인 Control Class의 레퍼런스를 리턴
ReturnType: X
Parameter: X
Author: 박영빈
Created: 2023/05/25
*/
Withdrawal* WithdrawalUI::getContol() {
    return this->withdrawalControl;
}

#endif //USERMANAGEMENT_WITHDRAWALUI_CPP


