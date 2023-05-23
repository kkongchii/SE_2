
#ifndef USERMANAGEMENT_VIEWRECRUITMENTSTATISTICS_CPP
#define USERMANAGEMENT_VIEWRECRUITMENTSTATISTICS_CPP

#include "ViewRecruitmentStatistics.h"

ViewRecruitmentStatistics::ViewRecruitmentStatistics() {
    this->viewRecruitmentStatisticsUI = new ViewRecruitmentStatisticsUI(this);
}

vector<pair<string,int>> ViewRecruitmentStatistics::showRecruitmentStatistics() {
    extern User* currentLoginUser;

    vector<Recruitment*> recruitmentList = ((CompanyUser*) currentLoginUser)->getOwnRecruitmentList()->getRecruitmentList();
   
    vector<string> taskList;
    map<string, int> countTask;
    bool flag;
    for(auto it = recruitmentList.begin(); it != recruitmentList.end(); it++) {
        string task = get<2>((*it)->getRecruitmentDetails());
        flag = false;
        for(int i = 0; i < taskList.size(); i++) {
            if(taskList[i] == task) {
                countTask[task]++;
                flag = true;
                break;
            }
        }
        if(!flag) {
            countTask.insert({task, 0});
            taskList.push_back(task);
        }
    }

    vector<pair<string, int>> recruitmentStatistics;
    for(auto it = taskList.begin(); it != taskList.end(); it++) {
        recruitmentStatistics.push_back({(*it), countTask[(*it)]});
    }

    return recruitmentStatistics;
}

ViewRecruitmentStatisticsUI* ViewRecruitmentStatistics::getUI() {
    return this->viewRecruitmentStatisticsUI;
}

#endif //USERMANAGEMENT_VIEWRECRUITMENTSTATISTICS_CPP
