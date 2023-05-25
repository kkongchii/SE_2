#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONSUI_CPP
#define USERMANAGEMENT_VIEWJOBAPPLICATIONSUI_CPP

#include "ViewJobApplicationsUI.h"
#include <fstream>

/*
Function : ViewJobApplicationsUI::ViewJobApplicationsUI(ViewJobApplications* viewJobApplicationsControl)
Description : ViewJobApplicationsUI Class ������, ViewJobApplications�κ��� ���۷����� ���޹޾� ����
ReturnType : X
Parameter : ViewJobApplications* viewJobApplicationsControl
Author : ���Ѿ�
Created : 2023/05/25
*/
ViewJobApplicationsUI::ViewJobApplicationsUI(ViewJobApplications* viewJobApplicationsControl) {
    this->viewJobApplicationsControl = viewJobApplicationsControl;
}

/*
Function : void ViewJobApplicationsUI::showJobApplication(ofstream& out_file)
Description : ���� ��ȸ ��ɿ� ���� ����� ����ϴ� �Լ�
ReturnType : void
Parameter : ofstream& out_file
Author : ���Ѿ�
Created : 2023/05/25
*/
void ViewJobApplicationsUI::showJobApplication(ofstream& out_file) {
    vector<tuple<string, int, string, int, string, int>> orderedJobApplicationList = this->getControl()->showUsersJobApplication();

    for (auto it = orderedJobApplicationList.begin(); it != orderedJobApplicationList.end(); it++) {
        out_file << "> " << get<0>(*it) << " " << get<1>(*it) << " " << get<2>(*it) << " " << get<3>(*it) << " " << get<4>(*it) << endl;
    }
}

/*
Function : ViewJobApplications* ViewJobApplicationsUI::getControl()
Description : ViewJobApplications�� ���۷����� ��ȯ�ϴ� Getter
ReturnType : ViewJobApplications*
Parameter : X
Author : ���Ѿ�
Created : 2023/05/25
*/
ViewJobApplications* ViewJobApplicationsUI::getControl() {
    return this->viewJobApplicationsControl;
}

#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONSUI_CPP