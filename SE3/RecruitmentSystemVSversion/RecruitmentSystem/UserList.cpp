#ifndef USERMANAGEMENT_USERLIST_CPP
#define USERMANAGEMENT_USERLIST_CPP
#include "UserList.h"

/*
Function : int UserList::createGeneralUser(string name, int personalNum, string id, string password)
Description : �Ϲ� ������ �����ϰ� ���� ���� ����Ʈ�� �߰��ϴ� �Լ�
ReturnType : int
Parameter : string name, int personalNum, string id, string password
Author : ���Ѿ�
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
Description : ȸ�� ������ �����ϰ� ���� ���� ����Ʈ�� �߰��ϴ� �Լ�
ReturnType : int
Parameter : string name, int companyNum, string id, string password
Author : ���Ѿ�
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
Description : ������ �����ϰ� ���� ���� ����Ʈ������ ���ܽ�Ű�� �Լ�
ReturnType : void
Parameter : string id
Author : ���Ѿ�
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
Description : ������ ID�� PW�� ���� ���� Entity ���۷����� ��ȯ�ϴ� �Լ�
ReturnType : User*
Parameter : string id, string password
Author : ���Ѿ�
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
Description : �α����� ������ ���¿� ���� �α׾ƿ�(0), ȸ��ȸ��(1), �Ϲ�ȸ��(2)���� ���� �缳��
ReturnType : void
Parameter : User* user
Author : ���Ѿ�
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
Description : ���� ���� ����Ʈ Getter �Լ�
ReturnType : vector<User*>
Parameter : X
Author : ���Ѿ�
Created : 2023/05/25
*/
vector<User*> UserList::getUserList() {
    return this->userList;
}

/*
Function : User* UserList::getSpecificUserByName(string name)
Description : �̸����� Ư�� ���� Entity ���۷��� ��ȯ
ReturnType : User*
Parameter : string name
Author : ���Ѿ�
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
Description : ����ڹ�ȣ�� Ư�� ȸ������ Entity ���۷��� ��ȯ
ReturnType : CompanyUser*
Parameter :
    int number : ����� ��ȣ
Author : ���Ѿ�
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
