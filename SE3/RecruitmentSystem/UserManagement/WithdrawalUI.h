#ifndef USERMANAGEMENT_WITHDRAWALUI_H
#define USERMANAGEMENT_WITHDRAWALUI_H
#include <iostream>
#include <string>
#include "Withdrawal.h"

using namespace std;
class Withdrawal;

class WithdrawalUI{
private:
    Withdrawal* withdrawalControl; // Control Class의 레퍼런스를 저장할 변수

public:
    WithdrawalUI(Withdrawal* withdrawalControl); // 생성자를 통해 Control Class와 레퍼런스 교환
    void startInterface(); // interface를 출력하는 함수
    void withdrawalUser(FILE *fp, string id); // 사용자가 이용하는 UI의 회원 탈퇴 함수
    Withdrawal* getContol(); // getter
};
#endif //USERMANAGEMENT_WITHDRAWALUI_H