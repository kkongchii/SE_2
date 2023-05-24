#ifndef USERMANAGEMENT_USER_CPP
#define USERMANAGEMENT_USER_CPP
#include "User.h"

User::User(string name, string id, string pw) {
    this->name = name;
    this->id = id;
    this->password = pw;
};

User::~User() {}

string User::getName() {
    return this->name;
}

string User::getId() {
    return this->id;
}

string User::getPW() {
    return this->password;
}

void User::setName(string name) {
    this->name = name;
}

void User::setId(string id) {
    this->id = id;
}

void User::setPW(string pw) {
    this->password = pw;
}

#endif //USERMANAGEMENT_USER_CPP
