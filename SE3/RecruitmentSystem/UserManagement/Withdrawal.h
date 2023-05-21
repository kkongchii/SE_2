#ifndef USERMANAGEMENT_WITHDRAWAL_H
#define USERMANAGEMENT_WITHDRAWAL_H
#include <iostream>
#include "WithdrawalUI.h"

using namespace std;
class WithdrawalUI;

class Withdrawal{
private:
    WithdrawalUI* withdrawalUI; // UI Class를 저장할 변수
public:
    Withdrawal(); // 생성자
    void deleteUser(string id); // UI가 이용하는 Control의 회원 탈퇴 함수
    WithdrawalUI* getUI(); // getter
};
#endif //USERMANAGEMENT_WITHDRAWAL_H