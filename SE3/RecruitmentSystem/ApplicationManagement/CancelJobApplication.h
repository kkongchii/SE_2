
#ifndef USERMANAGEMENT_CANCELJOBAPPLICATION_H
#define USERMANAGEMENT_CANCELJOBAPPLICATION_H

#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <ctime>
#include "CancelJobApplicationUI.h"
#include "entity/UserList.h"

using namespace std;
class CancelJobApplicationUI;

class CancelJobApplication {
private:
    CancelJobApplicationUI* cancelJobApplicationUI;
public:
    CancelJobApplication();
    // [0] string CompanyName,
    // [1] int SSN,
    // [2] string task
    tuple<string, int, string> dropJobApplication(int SSN);
    CancelJobApplicationUI* getUI();
};


#endif //USERMANAGEMENT_CANCELJOBAPPLICATION_H
