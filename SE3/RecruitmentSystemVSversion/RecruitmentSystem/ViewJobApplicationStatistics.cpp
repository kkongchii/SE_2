
#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICS_CPP
#define USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICS_CPP

#include "ViewJobApplicationStatistics.h"

/*
Function : ViewJobApplicationStatistics::ViewJobApplicationStatistics()
Description : ViewJobApplicationStatistics Class 생성자, ViewJobApplicationStatisticsUI를 생성하여 해당 레퍼런스를 저장
ReturnType : X
Parameter : X
Author : 정한얼
Created : 2022/05/25
*/
ViewJobApplicationStatistics::ViewJobApplicationStatistics() {
    this->viewJobApplicationStatisticsUI = new ViewJobApplicationStatisticsUI(this);
}

/*
Function : vector<pair<string, int>> ViewJobApplicationStatistics::showJobApplicationStatistics()
Description : 일반 회원 통계 조회 기능을 수행하는 함수, 업무별 (업무, 지원 수)를 리턴 함
ReturnType : vector<pair<string, int>>
Parameter : X
Author : 정한얼
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
Description : ViewJobApplicationStatisticsUI의 레퍼런스를 반환하는 Getter
ReturnType : ViewJobApplicationStatisticsUI*
Parameter : X
Author : 정한얼
Created : 2022/05/25
*/
ViewJobApplicationStatisticsUI* ViewJobApplicationStatistics::getUI() {
    return this->viewJobApplicationStatisticsUI;
}

#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICS_CPP
