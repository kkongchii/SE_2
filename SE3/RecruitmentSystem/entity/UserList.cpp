#ifndef USERMANAGEMENT_USERLIST_CPP
#define USERMANAGEMENT_USERLIST_CPP
#include "UserList.h"

int UserList::createGeneralUser(string name, int personalNum, string id, string password) {
    for(auto it=userList.begin(); it!=userList.end(); ++it){
        if((*it)->getId() == id){
            return -1;
        }
    }
    GeneralUser *newUser = new GeneralUser(name, personalNum, id, password);
    userList.push_back(newUser);
    return 0;
}

int UserList::createCompanyUser(string name, int companyNum, string id, string password) {
    for(auto it=userList.begin(); it!=userList.end(); ++it){
        if((*it)->getId() == id){
            return -1;
        }
    }
    CompanyUser *newUser = new CompanyUser(name, companyNum, id, password);
    userList.push_back(newUser);
    return 0;
}

void UserList::deleteUser(string id) {
    extern int isLogin;
    extern User* currentLoginUser; // main 함수에 선언된 isLogin, currentLoginUser 사용
    for(auto it=userList.begin(); it!=userList.end(); ++it){ // userList vector에 저장 된 모든 정보를 순회
        if((*it)->getId() == id){ // 인자로 받은 지울 id와 같다면
            delete *it; // 메모리 확보
            userList.erase(it); // userLiddst에서 삭제
            isLogin = 0; // 회원이 탈퇴하였으므로 현재 로그인 상태를 0으로 설정
            currentLoginUser = nullptr; // 회원이 탈퇴하였으므로 현재 유저 상태를 null로 설정
            return;
        }
    }
}

User* UserList::userCheck(string id, string pw) {
    for(const auto& user : userList){
        if(user->getId() == id && user->getPW() == pw){
            return user;
        }
    }
    return nullptr;
}

void UserList::userStateChange(User* user) {
    extern int isLogin;
    extern User *currentLoginUser;
    currentLoginUser = user;
    if(user == nullptr){
        isLogin = 0;
        return;
    }
    string classType = user->getClassType();
    if(classType == "Company"){
        isLogin = 1;
    }
    else if(classType == "General"){
        isLogin = 2;
    }
}

vector<User *> UserList::getUserList() {
    return this->userList;
}

User *UserList::getSpecificUserByName(string name) {
    for (User *user: userList) {
        if(name == user->getName())
            return user;
    }
    return nullptr;
}

CompanyUser *UserList::getSpecificUserBySSN(int number) {
    for (User* user: userList) {
        CompanyUser* CUser = (CompanyUser*) user;
        if(number == CUser->getCompanyRegistrationNumber())
            return CUser;
    }
    return nullptr;
}


#endif //USERMANAGEMENT_USERLIST_CPP
