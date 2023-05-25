#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONSUI_H
#define USERMANAGEMENT_VIEWJOBAPPLICATIONSUI_H

#include <iostream>
#include <stdio.h>
#include <string>
#include "ViewJobApplications.h"

using namespace std;
class ViewJobApplications;

/*
class : ViewJobApplicationsUI
Description : 지원 조회 기능 Boundary 클래스
Author : 정한얼
Created : 2022/05/25
*/
class ViewJobApplicationsUI {
private:
    ViewJobApplications* viewJobApplicationsControl;
public:
    ViewJobApplicationsUI(ViewJobApplications* viewJobApplicationsControl);
    void showJobApplication(ofstream& out_file);
    ViewJobApplications* getControl();
};


#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONSUI_H
