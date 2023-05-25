
#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONS_CPP
#define USERMANAGEMENT_VIEWJOBAPPLICATIONS_CPP

#include "ViewJobApplications.h"

bool comp(tuple<string, int, string, int, string, int> t1, tuple<string, int, string, int, string, int> t2) {
    return get<0>(t1) < get<0>(t2);
}

ViewJobApplications::ViewJobApplications() {
    this->viewJobApplicationsUI = new ViewJobApplicationsUI(this);
 
}

vector<tuple<string, int, string, int, string, int>> ViewJobApplications::showUsersJobApplication() {
    extern User* currentLoginUser; 

    vector<Recruitment*> jobApplicationList = ((GeneralUser*)currentLoginUser)->getOwnJobApplicationList()->getJobApplicationList();
    vector<tuple<string, int, string, int, string, int>> orderedJobApplicationList;
    for (auto it = jobApplicationList.begin(); it != jobApplicationList.end(); it++) {
        orderedJobApplicationList.push_back((*it)->getRecruitmentDetails());
    }

    sort(orderedJobApplicationList.begin(), orderedJobApplicationList.end(), comp);

    return orderedJobApplicationList;
}

ViewJobApplicationsUI* ViewJobApplications::getUI() {
    return this->viewJobApplicationsUI;
}

#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONS_CPP
