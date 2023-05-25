
#ifndef USERMANAGEMENT_VIEWRECRUITMENTSTATISTICS_H
#define USERMANAGEMENT_VIEWRECRUITMENTSTATISTICS_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "ViewRecruitmentStatisticsUI.h"
#include "UserList.h"

using namespace std;
class ViewRecruitmentStatisticsUI;

/*
class : ViewRecruitmentStatistics
Description : 회사 회원 통계 조회 기능 Control 클래스
Author : 정한얼
Created : 2023/05/25
*/
class ViewRecruitmentStatistics {
private:
    ViewRecruitmentStatisticsUI* viewRecruitmentStatisticsUI;
public:
    ViewRecruitmentStatistics();
    vector<pair<string,int>> showRecruitmentStatistics();
    ViewRecruitmentStatisticsUI* getUI();
};


#endif //USERMANAGEMENT_VIEWRECRUITMENTSTATISTICS_H
