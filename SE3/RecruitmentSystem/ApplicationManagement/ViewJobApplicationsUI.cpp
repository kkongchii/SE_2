#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONSUI_CPP
#define USERMANAGEMENT_VIEWJOBAPPLICATIONSUI_CPP

#include "ViewJobApplicationsUI.h"

ViewJobApplicationsUI::ViewJobApplicationsUI(ViewJobApplications* viewJobApplicationsControl) {
    this->viewJobApplicationsControl = viewJobApplicationsControl;
    // 매개변수로 받은 Control Class를 본인의 변수에 저장
}

void ViewJobApplicationsUI::showJobApplication() {  
    vector<tuple<string, int, string, int, string>> orderedJobApplicationList = this->getControl()->showUsersJobApplication();

    for(auto it = orderedJobApplicationList.begin(); it != orderedJobApplicationList.end(); it++) {
        if(it == orderedJobApplicationList.begin()) {
            printf("> %s %d %s %d %s",
                get<0>(*it).c_str(),
                get<1>(*it),
                get<2>(*it).c_str(),
                get<3>(*it),
                get<4>(*it).c_str());
        } else {
            printf("  %s %d %s %d %s",
                get<0>(*it).c_str(),
                get<1>(*it),
                get<2>(*it).c_str(),
                get<3>(*it),
                get<4>(*it).c_str());
        }
    }
}

ViewJobApplications* ViewJobApplicationsUI::getControl() {
    return this->viewJobApplicationsControl;
}

#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONSUI_CPP