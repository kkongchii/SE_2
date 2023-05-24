
#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICS_CPP
#define USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICS_CPP

#include "ViewJobApplicationStatistics.h"

ViewJobApplicationStatistics::ViewJobApplicationStatistics() {
    this->viewJobApplicationStatisticsUI = new ViewJobApplicationStatisticsUI(this);
}

vector<pair<string, int>> ViewJobApplicationStatistics::showJobApplicationStatistics() {
    extern User* currentLoginUser;
    cout << "showJobApplication\n";

    vector<Recruitment*> jobApplicationList = ((GeneralUser*)currentLoginUser)->getOwnJobApplicationList()->getJobApplicationList();

    vector<string> taskList;
    map<string, int> countTask;
    for (const auto& jobApplication : jobApplicationList) {
        string task = get<2>(jobApplication->getRecruitmentDetails());
        taskList.push_back(task);
        countTask[task] += get<5>(jobApplication->getRecruitmentDetails());
        cout << "countTask 추가했음\n";
    }

    vector<pair<string, int>> jobApplicationStatistics;
    for (const auto& count : countTask) {
        jobApplicationStatistics.push_back(make_pair(count.first, count.second));
    }

    return jobApplicationStatistics;
}

ViewJobApplicationStatisticsUI* ViewJobApplicationStatistics::getUI() {
    return this->viewJobApplicationStatisticsUI;
}

#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICS_CPP
