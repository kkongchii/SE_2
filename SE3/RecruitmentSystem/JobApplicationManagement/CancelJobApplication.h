/*
*   Create by Haneol Jeong on 2023-05-21
*/

#ifndef JOBAPPLICATION_MANAGEMENT_CANCELJOBAPPLICATION_H
#define JOBAPPLICATION_MANAGEMENT_CANCELJOBAPPLICATION_H

#include <iostream>
#include <vector>
#include <string>
#include "CancelJobApplicationUI.h"
#include "../Entity/GeneralUser.h"
#include "../Entity/JobApplicationList.h"
#include "../Entity/Recruitment.h"

using namespace std;

class CancelJobApplicationUI;

class CancelJobApplication {
private:
    CancelJobApplicationUI* cancelJobApplicationUI;   // Boundary Class�� reference�� ������ ����
public:
    CancelJobApplication(); // ������
    string cancelJobApplication(GeneralUser *currentUser, int companyRegistrationNumber);

    CancelJobApplicationUI* getUI();
};

#endif