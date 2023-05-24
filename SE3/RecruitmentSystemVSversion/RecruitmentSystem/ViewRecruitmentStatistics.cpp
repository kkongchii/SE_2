
#ifndef USERMANAGEMENT_VIEWRECRUITMENTSTATISTICS_CPP
#define USERMANAGEMENT_VIEWRECRUITMENTSTATISTICS_CPP

#include "ViewRecruitmentStatistics.h"

ViewRecruitmentStatistics::ViewRecruitmentStatistics() {
    this->viewRecruitmentStatisticsUI = new ViewRecruitmentStatisticsUI(this);
}

vector<pair<string, int>> ViewRecruitmentStatistics::showRecruitmentStatistics() {
    extern User* currentLoginUser;

    vector<Recruitment*> recruitmentList = ((CompanyUser*)currentLoginUser)->getOwnRecruitmentList()->getRecruitmentList();

    vector<string> taskList;
    map<string, int> countTask;
    for (const auto& recruitment : recruitmentList) {
        string task = get<2>(recruitment->getRecruitmentDetails());
        taskList.push_back(task);
        countTask[task] += get<5>(recruitment->getRecruitmentDetails());
        cout << "countTask 추가했음\n";
    }

    vector<pair<string, int>> recruitmentStatistics;
    for (const auto& count : countTask) {
        recruitmentStatistics.push_back(make_pair(count.first, count.second));
    }

    return recruitmentStatistics;
}

ViewRecruitmentStatisticsUI* ViewRecruitmentStatistics::getUI() {
    return this->viewRecruitmentStatisticsUI;
}

#endif //USERMANAGEMENT_VIEWRECRUITMENTSTATISTICS_CPP
