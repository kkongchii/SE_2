
#ifndef USERMANAGEMENT_VIEWRECRUITMENTSTATISTICS_CPP
#define USERMANAGEMENT_VIEWRECRUITMENTSTATISTICS_CPP

#include "ViewRecruitmentStatistics.h"

/*
Function : ViewRecruitmentStatistics::ViewRecruitmentStatistics()
Description : ViewRecruitmentStatistics Class ������, ViewRecruitmentStatisticsUI�� �����Ͽ� �ش� ���۷����� ����
ReturnType : X
Parameter : X
Author : ���Ѿ�
Created : 2022/05/25
*/
ViewRecruitmentStatistics::ViewRecruitmentStatistics() {
    this->viewRecruitmentStatisticsUI = new ViewRecruitmentStatisticsUI(this);
}

/*
Function : vector<pair<string, int>> ViewRecruitmentStatistics::showRecruitmentStatistics()
Description : ȸ�� ȸ�� ��� ��ȸ ����� �����ϴ� �Լ�, ������ (����, ������ ��)�� ���� ��
ReturnType : vector<pair<string, int>>
Parameter : X
Author : ���Ѿ�
Created : 2022/05/25
*/
vector<pair<string, int>> ViewRecruitmentStatistics::showRecruitmentStatistics() {
    extern User* currentLoginUser;

    vector<Recruitment*> recruitmentList = ((CompanyUser*)currentLoginUser)->getOwnRecruitmentList()->getRecruitmentList();

    vector<string> taskList;
    map<string, int> countTask;
    for (const auto& recruitment : recruitmentList) {
        string task = get<2>(recruitment->getRecruitmentDetails());
        taskList.push_back(task);
        countTask[task] += get<5>(recruitment->getRecruitmentDetails());
    }

    vector<pair<string, int>> recruitmentStatistics;
    for (const auto& count : countTask) {
        recruitmentStatistics.push_back(make_pair(count.first, count.second));
    }

    return recruitmentStatistics;
}

/*
Function : ViewRecruitmentStatisticsUI* ViewRecruitmentStatistics::getUI()
Description : ViewRecruitmentStatisticsUI�� ���۷����� ��ȯ�ϴ� Getter
ReturnType : ViewRecruitmentStatisticsUI*
Parameter : X
Author : ���Ѿ�
Created : 2022/05/25
*/
ViewRecruitmentStatisticsUI* ViewRecruitmentStatistics::getUI() {
    return this->viewRecruitmentStatisticsUI;
}

#endif //USERMANAGEMENT_VIEWRECRUITMENTSTATISTICS_CPP
