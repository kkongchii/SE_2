
#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICS_CPP
#define USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICS_CPP

#include "ViewJobApplicationStatistics.h"

/*
Function : ViewJobApplicationStatistics::ViewJobApplicationStatistics()
Description : ViewJobApplicationStatistics Class ������, ViewJobApplicationStatisticsUI�� �����Ͽ� �ش� ���۷����� ����
ReturnType : X
Parameter : X
Author : ���Ѿ�
Created : 2022/05/25
*/
ViewJobApplicationStatistics::ViewJobApplicationStatistics() {
    this->viewJobApplicationStatisticsUI = new ViewJobApplicationStatisticsUI(this);
}

/*
Function : vector<pair<string, int>> ViewJobApplicationStatistics::showJobApplicationStatistics()
Description : �Ϲ� ȸ�� ��� ��ȸ ����� �����ϴ� �Լ�, ������ (����, ���� ��)�� ���� ��
ReturnType : vector<pair<string, int>>
Parameter : X
Author : ���Ѿ�
Created : 2022/05/25
*/
vector<pair<string, int>> ViewJobApplicationStatistics::showJobApplicationStatistics() {
    extern User* currentLoginUser;

    vector<Recruitment*> jobApplicationList = ((GeneralUser*)currentLoginUser)->getOwnJobApplicationList()->getJobApplicationList();

    vector<string> taskList;
    map<string, int> countTask;
    for (const auto& jobApplication : jobApplicationList) {
        string task = get<2>(jobApplication->getRecruitmentDetails());
        taskList.push_back(task);
        countTask[task] += get<5>(jobApplication->getRecruitmentDetails());
    }

    vector<pair<string, int>> jobApplicationStatistics;
    for (const auto& count : countTask) {
        jobApplicationStatistics.push_back(make_pair(count.first, count.second));
    }

    return jobApplicationStatistics;
}

/*
Function : ViewJobApplicationStatisticsUI* ViewJobApplicationStatistics::getUI()
Description : ViewJobApplicationStatisticsUI�� ���۷����� ��ȯ�ϴ� Getter
ReturnType : ViewJobApplicationStatisticsUI*
Parameter : X
Author : ���Ѿ�
Created : 2022/05/25
*/
ViewJobApplicationStatisticsUI* ViewJobApplicationStatistics::getUI() {
    return this->viewJobApplicationStatisticsUI;
}

#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICS_CPP
