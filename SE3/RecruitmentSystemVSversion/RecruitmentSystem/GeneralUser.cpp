#ifndef USERMANAGEMENT_GENERALUSER_CPP
#define USERMANAGEMENT_GENERALUSER_CPP
#include "GeneralUser.h"

/*
Function : GeneralUser::GeneralUser(string name, int personalNum, string id, string pw) : User(name, id, pw)
Description : GeneralUser Class 생성자
ReturnType : X
Parameter : string name, int personalNum, string id, string pw 
Author : 정한얼
Created : 2023/05/25
*/
GeneralUser::GeneralUser(string name, int personalNum, string id, string pw) : User(name, id, pw) {
    this->personalRegistrationNumber = personalNum;
    this->ownJobApplicationList = new JobApplicationList();
}

/*
Function : GeneralUser::~GeneralUser()
Description : GeneralUser Class 소멸자
ReturnType : X
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
GeneralUser::~GeneralUser() {

}

/*
Function : int GeneralUser::getPersonalRegistrationNumber()
Description : 주민 번호 Getter 함수
ReturnType : int
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
int GeneralUser::getPersonalRegistrationNumber() {
    return this->personalRegistrationNumber;
}

/*
Function : void GeneralUser::setPersonalRegistrationNumber(int personalNum)
Description : 주민 번호 Setter 함수
ReturnType : void
Parameter : int personalNum
Author : 정한얼
Created : 2023/05/25
*/
void GeneralUser::setPersonalRegistrationNumber(int personalNum) {
    this->personalRegistrationNumber = personalNum;
}

/*
Function : string GeneralUser::getClassType()
Description : 자식 클래스의 타입을 파악하기 위해서 재정의한 함수
ReturnType : string
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
string GeneralUser::getClassType() {
    return "General";
}

/*
Function : JobApplicationList* GeneralUser::getOwnJobApplicationList()
Description : 본인 지원정보 리스트(ownJobApplicationList) Getter 함수
ReturnType : JobApplicationList*
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
JobApplicationList* GeneralUser::getOwnJobApplicationList() {
    return this->ownJobApplicationList;
}

#endif //USERMANAGEMENT_GENERALUSER_CPP
