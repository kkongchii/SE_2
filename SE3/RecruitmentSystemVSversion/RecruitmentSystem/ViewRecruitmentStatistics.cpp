
#ifndef USERMANAGEMENT_VIEWRECRUITMENTSTATISTICS_CPP
#define USERMANAGEMENT_VIEWRECRUITMENTSTATISTICS_CPP

#include "ViewRecruitmentStatistics.h"

/*
Function : ViewRecruitmentStatistics::ViewRecruitmentStatistics()
Description : ViewRecruitmentStatistics Class 생성자, ViewRecruitmentStatisticsUI를 생성하여 해당 레퍼런스를 저장
ReturnType : X
Parameter : X
Author : 정한얼
Created : 2022/05/25
*/
ViewRecruitmentStatistics::ViewRecruitmentStatistics() {
    this->viewRecruitmentStatisticsUI = new ViewRecruitmentStatisticsUI(this);
}

/*
Function : vector<pair<string, int>> ViewRecruitmentStatistics::showRecruitmentStatistics()
Description : 회사 회원 통계 조회 기능을 수행하는 함수, 업무별 (업무, 지원자 수)를 리턴 함
ReturnType : vector<pair<string, int>>
Parameter : X
Author : 정한얼
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
Description : ViewRecruitmentStatisticsUI의 레퍼런스를 반환하는 Getter
ReturnType : ViewRecruitmentStatisticsUI*
Parameter : X
Author : 정한얼
Created : 2022/05/25
*/
ViewRecruitmentStatisticsUI* ViewRecruitmentStatistics::getUI() {
    return this->viewRecruitmentStatisticsUI;
}

#endif //USERMANAGEMENT_VIEWRECRUITMENTSTATISTICS_CPP
