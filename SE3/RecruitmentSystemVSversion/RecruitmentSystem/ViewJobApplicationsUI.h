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
Description : ���� ��ȸ ��� Boundary Ŭ����
Author : ���Ѿ�
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
