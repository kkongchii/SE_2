#ifndef USERMANAGEMENT_GENERALUSER_CPP
#define USERMANAGEMENT_GENERALUSER_CPP
#include "GeneralUser.h"

/*
Function : GeneralUser::GeneralUser(string name, int personalNum, string id, string pw) : User(name, id, pw)
Description : GeneralUser Class ������
ReturnType : X
Parameter : string name, int personalNum, string id, string pw 
Author : ���Ѿ�
Created : 2023/05/25
*/
GeneralUser::GeneralUser(string name, int personalNum, string id, string pw) : User(name, id, pw) {
    this->personalRegistrationNumber = personalNum;
    this->ownJobApplicationList = new JobApplicationList();
}

/*
Function : GeneralUser::~GeneralUser()
Description : GeneralUser Class �Ҹ���
ReturnType : X
Parameter : X
Author : ���Ѿ�
Created : 2023/05/25
*/
GeneralUser::~GeneralUser() {

}

/*
Function : int GeneralUser::getPersonalRegistrationNumber()
Description : �ֹ� ��ȣ Getter �Լ�
ReturnType : int
Parameter : X
Author : ���Ѿ�
Created : 2023/05/25
*/
int GeneralUser::getPersonalRegistrationNumber() {
    return this->personalRegistrationNumber;
}

/*
Function : void GeneralUser::setPersonalRegistrationNumber(int personalNum)
Description : �ֹ� ��ȣ Setter �Լ�
ReturnType : void
Parameter : int personalNum
Author : ���Ѿ�
Created : 2023/05/25
*/
void GeneralUser::setPersonalRegistrationNumber(int personalNum) {
    this->personalRegistrationNumber = personalNum;
}

/*
Function : string GeneralUser::getClassType()
Description : �ڽ� Ŭ������ Ÿ���� �ľ��ϱ� ���ؼ� �������� �Լ�
ReturnType : string
Parameter : X
Author : ���Ѿ�
Created : 2023/05/25
*/
string GeneralUser::getClassType() {
    return "General";
}

/*
Function : JobApplicationList* GeneralUser::getOwnJobApplicationList()
Description : ���� �������� ����Ʈ(ownJobApplicationList) Getter �Լ�
ReturnType : JobApplicationList*
Parameter : X
Author : ���Ѿ�
Created : 2023/05/25
*/
JobApplicationList* GeneralUser::getOwnJobApplicationList() {
    return this->ownJobApplicationList;
}

#endif //USERMANAGEMENT_GENERALUSER_CPP
