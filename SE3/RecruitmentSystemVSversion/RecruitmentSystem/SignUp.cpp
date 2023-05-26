#ifndef USERMANAGEMENT_SIGNUP_CPP
#define USERMANAGEMENT_SIGNUP_CPP

#include "SignUp.h"
#include "UserList.h"

/*
Function : SignUp::SignUp()
Description: UI Class와 레퍼런스를 교환하는 생성자
ReturnType: X
Parameter: X
Author: 이정원
Created: 2023/05/25
*/
SignUp::SignUp() {
    this->signupUI = new SignUpUI(this);
}

/*
Function : int SignUp::addGeneralUser(string name, int personalNum, string id, string password)
Description: 일반 유저를 생성하여 유저 컬렉션에 추가한 뒤 결과를 리턴하는 함수
ReturnType: int
Parameter: string name, int personalNum, string id, string password
Author: 이정원
Created: 2023/05/25
*/
int SignUp::addGeneralUser(string name, int personalNum, string id, string password) {
    extern UserList userDB; 
    int result = userDB.createGeneralUser(name, personalNum, id, password);
    return result;
}

/*
Function : int SignUp::addCompanyUser(string name, int companyNum, string id, string password)
Description: 회사 유저를 생성하여 유저 컬렉션에 추가한 뒤 결과를 리턴하는 함수
ReturnType: int
Parameter: string name, int companyNum, string id, string password
Author: 주수진
Created: 2023/05/25
*/
int SignUp::addCompanyUser(string name, int companyNum, string id, string password) {
    extern UserList userDB; 
    int result = userDB.createCompanyUser(name, companyNum, id, password);
    return result;
}

/*
Function : SignUpUI* SignUp::getUI()
Description: 보유 중인 UI Class의 레퍼런스를 리턴
ReturnType: X
Parameter: X
Author: 이정원
Created: 2023/05/25
*/
SignUpUI* SignUp::getUI() {
    return this->signupUI;
}

#endif //USERMANAGEMENT_SIGNUP_CPP


