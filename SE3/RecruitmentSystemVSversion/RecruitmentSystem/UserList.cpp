#ifndef USERMANAGEMENT_USERLIST_CPP
#define USERMANAGEMENT_USERLIST_CPP
#include "UserList.h"

/*
Function : int UserList::createGeneralUser(string name, int personalNum, string id, string password)
Description : 일반 유저를 생성하고 유저 정보 리스트에 추가하는 함수
ReturnType : int
Parameter : string name, int personalNum, string id, string password
Author : 정한얼
Created : 2023/05/25
*/
int UserList::createGeneralUser(string name, int personalNum, string id, string password) {
    for (auto it = userList.begin(); it != userList.end(); ++it) {
        if ((*it)->getId() == id) {
            return -1;
        }
    }
    GeneralUser* newUser = new GeneralUser(name, personalNum, id, password);
    userList.push_back(newUser);
    return 0;
}

/*
Function : int UserList::createCompanyUser(string name, int companyNum, string id, string password)
Description : 회사 유저를 생성하고 유저 정보 리스트에 추가하는 함수
ReturnType : int
Parameter : string name, int companyNum, string id, string password
Author : 정한얼
Created : 2023/05/25
*/
int UserList::createCompanyUser(string name, int companyNum, string id, string password) {
    for (auto it = userList.begin(); it != userList.end(); ++it) {
        if ((*it)->getId() == id) {
            return -1;
        }
    }
    CompanyUser* newUser = new CompanyUser(name, companyNum, id, password);
    userList.push_back(newUser);
    return 0;
}

/*
Function : void UserList::deleteUser(string id)
Description : 유저를 삭제하고 유저 정보 리스트에서도 제외시키는 함수
ReturnType : void
Parameter : string id
Author : 정한얼
Created : 2023/05/25
*/
void UserList::deleteUser(string id) {
    extern int isLogin;
    extern User* currentLoginUser; 
    for (auto it = userList.begin(); it != userList.end(); ++it) { 
        if ((*it)->getId() == id) { 
            delete* it; 
            userList.erase(it); 
            isLogin = 0; 
            currentLoginUser = nullptr;
            return;
        }
    }
}

/*
Function : User* UserList::userCheck(string id, string pw)
Description : 유저의 ID와 PW를 통해 유저 Entity 레퍼런스를 반환하는 함수
ReturnType : User*
Parameter : string id, string password
Author : 정한얼
Created : 2023/05/25
*/
User* UserList::userCheck(string id, string pw) {
    for (const auto& user : userList) {
        if (user->getId() == id && user->getPW() == pw) {
            return user;
        }
    }
    return nullptr;
}

/*
Function : void UserList::userStateChange(User* user)
Description : 로그인한 유저의 상태에 따라 로그아웃(0), 회사회원(1), 일반회원(2)으로 값을 재설정
ReturnType : void
Parameter : User* user
Author : 정한얼
Created : 2023/05/25
*/
void UserList::userStateChange(User* user) {
    extern int isLogin;
    extern User* currentLoginUser;
    currentLoginUser = user;
    if (user == nullptr) {
        isLogin = 0;
        return;
    }
    string classType = user->getClassType();
    if (classType == "Company") {
        isLogin = 1;
    }
    else if (classType == "General") {
        isLogin = 2;
    }
}

/*
Function : vector<User*> UserList::getUserList()
Description : 유저 정보 리스트 Getter 함수
ReturnType : vector<User*>
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
vector<User*> UserList::getUserList() {
    return this->userList;
}

/*
Function : User* UserList::getSpecificUserByName(string name)
Description : 이름으로 특정 유저 Entity 레퍼런스 반환
ReturnType : User*
Parameter : string name
Author : 정한얼
Created : 2023/05/25
*/
User* UserList::getSpecificUserByName(string name) {
    for (User* user : userList) {
        if (name == user->getName())
            return user;
    }
    return nullptr;
}

/*
Function : UserList::getSpecificUserBySSN()
Description : 사업자번호로 특정 회사유저 Entity 레퍼런스 반환
ReturnType : CompanyUser*
Parameter :
    int number : 사업자 번호
Author : 정한얼
Created : 2023/05/25
*/
CompanyUser* UserList::getSpecificUserBySSN(int number) {
    for (User* user : userList) {
        CompanyUser* CUser = (CompanyUser*)user;
        if (number == CUser->getCompanyRegistrationNumber())
            return CUser;
    }
    return nullptr;
}


#endif //USERMANAGEMENT_USERLIST_CPP
