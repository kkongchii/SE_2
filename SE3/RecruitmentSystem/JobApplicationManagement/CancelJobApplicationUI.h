/*
*   Create by Haneol Jeong on 2023-05-21
*/

#ifndef JOBAPPLICATION_MANAGEMENT_CANCELJOBAPPLICATIONUI_H
#define JOBAPPLICATION_MANAGEMENT_CANCELJOBAPPLICATIONUI_H

#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include "CancelJobApplication.h"
#include "../Entity/GeneralUser.h"

using namespace std;

class CancelJobApplication;

class CancelJobApplicationUI {
private:
    CancelJobApplication* cancelJobApplicationControl;   // Control Class의 reference를 저장할 변수
public:
    CancelJobApplicationUI(CancelJobApplication* cancelJobApplication); // 생성자를 통해 Control Class와 reference 교환
    void startInterface();
    void selectJobApplication(GeneralUser *currentUser, int companyRegistrationNumber);

    CancelJobApplication* getControl();
};

#endif