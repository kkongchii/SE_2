#ifndef USERMANAGEMENT_GENERALUSER_CPP
#define USERMANAGEMENT_GENERALUSER_CPP
#include "GeneralUser.h"

GeneralUser::GeneralUser(string name, int personalNum, string id, string pw) : User(name, id, pw) {
    this->personalRegistrationNumber = personalNum;
    this->ownJobApplicationList = new JobApplicationList();
}

GeneralUser::~GeneralUser() {

}

int GeneralUser::getPersonalRegistrationNumber() {
    return this->personalRegistrationNumber;
}

void GeneralUser::setPersonalRegistrationNumber(int personalNum) {
    this->personalRegistrationNumber = personalNum;
}

string GeneralUser::getClassType() {
    return "General";
}

JobApplicationList* GeneralUser::getOwnJobApplicationList() {
    return this->ownJobApplicationList;
}

#endif //USERMANAGEMENT_GENERALUSER_CPP
