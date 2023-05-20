//
// Created by YeongBin on 2023-05-20.
//

#ifndef USERMANAGEMENT_GENERALUSER_CPP
#define USERMANAGEMENT_GENERALUSER_CPP
#include "GeneralUser.h"

GeneralUser::GeneralUser(string name, int personalNum, string id, string pw): User(name, id, pw) {
    this->personalRegistrationNumber = personalNum;
}

int GeneralUser::getPersonalRegistrationNumber() {
    return this->personalRegistrationNumber;
}

void GeneralUser::setPersonalRegistrationNumber(int personalNum) {
    this->personalRegistrationNumber = personalNum;
}

string GeneralUser::getClassType(){
    return "General"; // 어떤 자식 타입인지 반환하는 함수
}

#endif //USERMANAGEMENT_GENERALUSER_CPP
