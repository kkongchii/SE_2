#ifndef USERMANAGEMENT_USERLIST_H
#define USERMANAGEMENT_USERLIST_H
#include <iostream>
#include <string>
#include <vector>
#include "GeneralUser.h"
#include "CompanyUser.h"
using namespace std;

class UserList{
private:
    vector<User*> userList;
public:
    int createGeneralUser(string name, int personalNum, string id, string password);
    int createCompanyUser(string name, int companyNum, string id, string password);
    void deleteUser(string id); // 실제로 유저를 삭제하는 함수, 2.1.1.deleteUser()
    User* userCheck(string id, string pw);
    void userStateChange(User* user);
    User* getSpecificUserByName(string name);
    CompanyUser* getSpecificUserBySSN(int number);
    vector<User*> getUserList();

};

#endif //USERMANAGEMENT_USERLIST_H
