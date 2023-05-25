
#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONS_CPP
#define USERMANAGEMENT_VIEWJOBAPPLICATIONS_CPP

#include "ViewJobApplications.h"

/*
Function : bool comp(tuple<string, int, string, int, string, int> t1, tuple<string, int, string, int, string, int> t2)
Description :  회사이름의 오름차순 정렬을 위한 비교 함수
ReturnType : bool
Parameter : tuple<string, int, string, int, string, int> t1, tuple<string, int, string, int, string, int> t2
Author : 정한얼
Created : 2022/05/25
*/
bool comp(tuple<string, int, string, int, string, int> t1, tuple<string, int, string, int, string, int> t2) {
    return get<0>(t1) < get<0>(t2);
}

/*
Function : ViewJobApplications::ViewJobApplications()
Description : ViewJobApplications Class 생성자, ViewJobApplicationsUI를 생성하여 해당 레퍼런스를 저장
ReturnType : X
Parameter : X
Author : 정한얼
Created : 2022/05/25
*/
ViewJobApplications::ViewJobApplications() {
    this->viewJobApplicationsUI = new ViewJobApplicationsUI(this);
 
}

/*
Function : vector<tuple<string, int, string, int, string, int>> ViewJobApplications::showUsersJobApplication()
Description : 지원 조회 기능을 수행하는 함수, 조회한 회사이름, 사업자번호, 업무, 최대 지원자 수, 마감일자, 현재 지원자 수를 리턴 함
ReturnType : vector<tuple<string, int, string, int, string, int>>
Parameter : X
Author : 정한얼
Created : 2022/05/25
*/
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

/*
Function : ViewJobApplicationsUI* ViewJobApplications::getUI()
Description : ViewJobApplicationsUI의 레퍼런스를 반환하는 Getter
ReturnType : ViewJobApplicationsUI*
Parameter : X
Author : 정한얼
Created : 2022/05/25
*/
ViewJobApplicationsUI* ViewJobApplications::getUI() {
    return this->viewJobApplicationsUI;
}

#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONS_CPP
