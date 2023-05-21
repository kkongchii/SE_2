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
    CancelJobApplicationUI* cancelJobApplicationUI;   // Boundary Class의 reference를 저장할 변수
public:
    CancelJobApplication(); // 생성자
    string cancelJobApplication(GeneralUser *currentUser, int companyRegistrationNumber);

    CancelJobApplicationUI* getUI();
};

#endif