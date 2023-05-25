#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONSUI_CPP
#define USERMANAGEMENT_VIEWJOBAPPLICATIONSUI_CPP

#include "ViewJobApplicationsUI.h"
#include <fstream>

/*
Function : ViewJobApplicationsUI::ViewJobApplicationsUI(ViewJobApplications* viewJobApplicationsControl)
Description : ViewJobApplicationsUI Class 생성자, ViewJobApplications로부터 레퍼런스를 전달받아 저장
ReturnType : X
Parameter : ViewJobApplications* viewJobApplicationsControl
Author : 정한얼
Created : 2023/05/25
*/
ViewJobApplicationsUI::ViewJobApplicationsUI(ViewJobApplications* viewJobApplicationsControl) {
    this->viewJobApplicationsControl = viewJobApplicationsControl;
}

/*
Function : void ViewJobApplicationsUI::showJobApplication(ofstream& out_file)
Description : 지원 조회 기능에 대한 결과를 출력하는 함수
ReturnType : void
Parameter : ofstream& out_file
Author : 정한얼
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
Description : ViewJobApplications의 레퍼런스를 반환하는 Getter
ReturnType : ViewJobApplications*
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
ViewJobApplications* ViewJobApplicationsUI::getControl() {
    return this->viewJobApplicationsControl;
}

#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONSUI_CPP