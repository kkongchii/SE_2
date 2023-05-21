/*
*   Create by Haneol Jeong on 2023-05-21
*/

#ifndef JOBAPPLICATION_MANAGEMENT_VIEWJOBAPPLICATIONSUI_H
#define JOBAPPLICATION_MANAGEMENT_VIEWJOBAPPLICATIONSUI_H

#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include "ViewJobApplications.h"
#include "../Entity/GeneralUser.h"

using namespace std;

class ViewJobApplications;

class ViewJobApplicationsUI {
private:
    ViewJobApplications *viewJobApplicationsControl;   // Control Class의 reference를 저장할 변수
public:
    ViewJobApplicationsUI(ViewJobApplications* viewJobApplications); // 생성자를 통해 Control Class와 reference 교환
    void showJobApplication(GeneralUser* currentUser); // currentUser의 지원정보 조회 함수 
    
    ViewJobApplications* getControl();
};

#endif