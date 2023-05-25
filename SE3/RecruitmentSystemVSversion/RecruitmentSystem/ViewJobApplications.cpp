
#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONS_CPP
#define USERMANAGEMENT_VIEWJOBAPPLICATIONS_CPP

#include "ViewJobApplications.h"

/*
Function : bool comp(tuple<string, int, string, int, string, int> t1, tuple<string, int, string, int, string, int> t2)
Description :  ȸ���̸��� �������� ������ ���� �� �Լ�
ReturnType : bool
Parameter : tuple<string, int, string, int, string, int> t1, tuple<string, int, string, int, string, int> t2
Author : ���Ѿ�
Created : 2022/05/25
*/
bool comp(tuple<string, int, string, int, string, int> t1, tuple<string, int, string, int, string, int> t2) {
    return get<0>(t1) < get<0>(t2);
}

/*
Function : ViewJobApplications::ViewJobApplications()
Description : ViewJobApplications Class ������, ViewJobApplicationsUI�� �����Ͽ� �ش� ���۷����� ����
ReturnType : X
Parameter : X
Author : ���Ѿ�
Created : 2022/05/25
*/
ViewJobApplications::ViewJobApplications() {
    this->viewJobApplicationsUI = new ViewJobApplicationsUI(this);
 
}

/*
Function : vector<tuple<string, int, string, int, string, int>> ViewJobApplications::showUsersJobApplication()
Description : ���� ��ȸ ����� �����ϴ� �Լ�, ��ȸ�� ȸ���̸�, ����ڹ�ȣ, ����, �ִ� ������ ��, ��������, ���� ������ ���� ���� ��
ReturnType : vector<tuple<string, int, string, int, string, int>>
Parameter : X
Author : ���Ѿ�
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
Description : ViewJobApplicationsUI�� ���۷����� ��ȯ�ϴ� Getter
ReturnType : ViewJobApplicationsUI*
Parameter : X
Author : ���Ѿ�
Created : 2022/05/25
*/
ViewJobApplicationsUI* ViewJobApplications::getUI() {
    return this->viewJobApplicationsUI;
}

#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONS_CPP
