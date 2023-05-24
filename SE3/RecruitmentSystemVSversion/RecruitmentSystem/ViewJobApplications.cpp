
#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONS_CPP
#define USERMANAGEMENT_VIEWJOBAPPLICATIONS_CPP

#include "ViewJobApplications.h"

bool comp(tuple<string, int, string, int, string, int> t1, tuple<string, int, string, int, string, int> t2) {
    return get<0>(t1) < get<0>(t2);
}

ViewJobApplications::ViewJobApplications() {
    this->viewJobApplicationsUI = new ViewJobApplicationsUI(this);
    // UI Class를 생성하여 본인의 멤버 변수에 저장, 레퍼런스 교환
}

vector<tuple<string, int, string, int, string, int>> ViewJobApplications::showUsersJobApplication() {
    extern User* currentLoginUser; // main 함수의 currentLoginUser를 사용

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
