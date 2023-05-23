
#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICS_CPP
#define USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICS_CPP

#include "ViewJobApplicationStatistics.h"

ViewJobApplicationStatistics::ViewJobApplicationStatistics() {
    this->viewJobApplicationStatisticsUI = new ViewJobApplicationStatisticsUI(this);
}

vector<pair<string, int>> ViewJobApplicationStatistics::showJobApplicationStatistics() {
    extern User* currentLoginUser;

    vector<Recruitment*> jobApplicationList = ((GeneralUser*) currentLoginUser)->getOwnJobApplicationList()->getJobApplicationList();
    
    vector<string> taskList;
    map<string, int> countTask;
    bool flag;
    for(auto it = jobApplicationList.begin(); it != jobApplicationList.end(); it++) {
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

    vector<pair<string, int>> jobApplicationStatistics;
    for(auto it = taskList.begin(); it != taskList.end(); it++) {
        jobApplicationStatistics.push_back({(*it), countTask[(*it)]});
    }

    return jobApplicationStatistics;
}

ViewJobApplicationStatisticsUI* ViewJobApplicationStatistics::getUI() {
    return this->viewJobApplicationStatisticsUI;
}

#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICS_CPP
