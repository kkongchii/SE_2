#ifndef USERMANAGEMENT_WITHDRAWAL_H
#define USERMANAGEMENT_WITHDRAWAL_H
#include <iostream>
#include "WithdrawalUI.h"

using namespace std;
class WithdrawalUI;

class Withdrawal{
public:
    WithdrawalUI* withdrawalUI; // UI Class를 저장할 변수
    Withdrawal(); // 생성자
    void deleteUser(string id); // UI가 이용하는 Control의 회원 탈퇴 함수
};
#endif //USERMANAGEMENT_WITHDRAWAL_H