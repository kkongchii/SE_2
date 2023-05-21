/*
*   Create by Haneol Jeong on 2023-05-21
*/

#include "ViewJobApplications.h"
#include "../Entity/JobApplicationList.h"
#include <algorithm>

bool comp(tuple<string, int, string, int, string> t1, tuple<string, int, string, int, string>  t2) {
    return get<0>(t1) < get<0>(t2);
}

ViewJobApplications::ViewJobApplications() {
    this->viewJobApplicationsUI = new ViewJobApplicationsUI(this);
    // UI Class를 생성하여 본인의 멤버 변수에 저장, 레퍼런스 교환
}


vector<tuple<string, int, string, int, string>> ViewJobApplications::showUsersJobApplication(GeneralUser *currentUser) {
    vector<tuple<string, int, string, int, string>> jobApplicationListOrderByCompanyName;

    JobApplicationList jobapplicationList = currentUser->listJobApplication();

    // jobapplicationList Class 내의 리스트 size만큼 반복
    int size = jobapplicationList.getSize();
    tuple<string, int, string, string, int, string> tempJobapplication;
    for(int i = 0; i < size; i++) {
        if(i == 0) {
            tempJobapplication = jobapplicationList.findFirst();
            jobApplicationListOrderByCompanyName.push_back({
                get<2>(tempJobapplication),
                get<1>(tempJobapplication),
                get<3>(tempJobapplication),
                get<4>(tempJobapplication),
                get<5>(tempJobapplication),
            });
        } else {
            tempJobapplication = jobapplicationList.getNext();
            jobApplicationListOrderByCompanyName.push_back({
                get<2>(tempJobapplication),
                get<1>(tempJobapplication),
                get<3>(tempJobapplication),
                get<4>(tempJobapplication),
                get<5>(tempJobapplication),
            });
        }
    }

    sort(jobApplicationListOrderByCompanyName.begin(), jobApplicationListOrderByCompanyName.end(), comp);

    return jobApplicationListOrderByCompanyName;
}

ViewJobApplicationsUI* ViewJobApplications::getUI() {
    return this->viewJobApplicationsUI;
}