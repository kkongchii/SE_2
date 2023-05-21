/*
*   Create by Haneol Jeong on 2023-05-21
*/

#include "ViewJobApplicationsUI.h"

ViewJobApplicationsUI::ViewJobApplicationsUI(ViewJobApplications* viewJobApplications) {
    this->viewJobApplicationsControl = viewJobApplications;
}
    
void ViewJobApplicationsUI::showJobApplication(GeneralUser* currentUser) {
    vector<tuple<string, int, string, int, string>> jobApplicationListOrderByCompanyName;
    jobApplicationListOrderByCompanyName = this->viewJobApplicationsControl->showUsersJobApplication(currentUser);

    for(int i = 0; i < jobApplicationListOrderByCompanyName.size(); i++) {
        printf("> %s %d %s %d %s\n", 
            get<0>(jobApplicationListOrderByCompanyName[i]).c_str(),
            get<1>(jobApplicationListOrderByCompanyName[i]),
            get<2>(jobApplicationListOrderByCompanyName[i]).c_str(),
            get<3>(jobApplicationListOrderByCompanyName[i]),
            get<4>(jobApplicationListOrderByCompanyName[i]).c_str());
    }

    printf("\n");
}

ViewJobApplications* ViewJobApplicationsUI::getControl() {
    return this->viewJobApplicationsControl;
}