/*
*   Create by Haneol Jeong on 2023-05-21
*/

#ifndef JOBAPPLICATION_MANAGEMENT_VIEWJOBAPPLICATIONS_H
#define JOBAPPLICATION_MANAGEMENT_VIEWJOBAPPLICATIONS_H

#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include "ViewJobApplicationsUI.h"
#include "../Entity/GeneralUser.h"

using namespace std;

class ViewJobApplicationsUI;

class ViewJobApplications {
private:
    ViewJobApplicationsUI* viewJobApplicationsUI;   // Boundary Class의 reference를 저장할 변수
public:
    ViewJobApplications(); // 생성자
    vector<tuple<string, int, string, int, string>> showUsersJobApplication(GeneralUser *currentUser);    // Boundary Class에서 요청받은 currentUser의 지원정보 리스트를 처리하여 전달해주는 함수

    ViewJobApplicationsUI* getUI();
};

#endif