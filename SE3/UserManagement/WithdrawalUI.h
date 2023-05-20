#ifndef USERMANAGEMENT_WITHDRAWALUI_H
#define USERMANAGEMENT_WITHDRAWALUI_H
#include <iostream>
#include <string>
#include "Withdrawal.h"

using namespace std;
class Withdrawal;

class WithdrawalUI{
public:
    WithdrawalUI(Withdrawal* withdrawalControl); // 생성자를 통해 Control Class와 레퍼런스 교환
    Withdrawal* withdrawalControl; // Control Class의 레퍼런스를 저장할 변수
    void startInterface(); // interface를 출력하는 함수
    void withdrawalUser(string id); // 사용자가 이용하는 UI의 회원 탈퇴 함수
};
#endif //USERMANAGEMENT_WITHDRAWALUI_H