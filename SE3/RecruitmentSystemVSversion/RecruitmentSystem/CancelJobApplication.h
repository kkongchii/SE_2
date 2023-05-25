
#ifndef USERMANAGEMENT_CANCELJOBAPPLICATION_H
#define USERMANAGEMENT_CANCELJOBAPPLICATION_H

#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <ctime>
#include "CancelJobApplicationUI.h"
#include "UserList.h"

using namespace std;
class CancelJobApplicationUI;

/*
class : CancelJobApplication
Description : ���� ��� ��� Control Ŭ����
Author : ���Ѿ�
Created : 2022/05/25
*/
class CancelJobApplication {
private:
    CancelJobApplicationUI* cancelJobApplicationUI;
public:
    CancelJobApplication();
    tuple<string, int, string> dropJobApplication(int SSN);
    CancelJobApplicationUI* getUI();
};


#endif //USERMANAGEMENT_CANCELJOBAPPLICATION_H
