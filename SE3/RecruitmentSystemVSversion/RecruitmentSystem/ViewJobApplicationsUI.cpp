#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONSUI_CPP
#define USERMANAGEMENT_VIEWJOBAPPLICATIONSUI_CPP

#include "ViewJobApplicationsUI.h"
#include <fstream>


ViewJobApplicationsUI::ViewJobApplicationsUI(ViewJobApplications* viewJobApplicationsControl) {
    this->viewJobApplicationsControl = viewJobApplicationsControl;
    // 매개변수로 받은 Control Class를 본인의 변수에 저장
}

void ViewJobApplicationsUI::showJobApplication(ofstream& out_file) {
    vector<tuple<string, int, string, int, string, int>> orderedJobApplicationList = this->getControl()->showUsersJobApplication();

    for (auto it = orderedJobApplicationList.begin(); it != orderedJobApplicationList.end(); it++) {
        out_file << "> " << get<0>(*it) << " " << get<1>(*it) << " " << get<2>(*it) << " " << get<3>(*it) << " " << get<4>(*it) << endl;
    }
}



ViewJobApplications* ViewJobApplicationsUI::getControl() {
    return this->viewJobApplicationsControl;
}

#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONSUI_CPP