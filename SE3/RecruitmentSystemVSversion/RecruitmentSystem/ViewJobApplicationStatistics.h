
#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICS_H
#define USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICS_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "ViewJobApplicationStatisticsUI.h"
#include "UserList.h"

using namespace std;
class ViewJobApplicationStatisticsUI;

/*
class : ViewJobApplicationStatistics
Description : 일반 회원 통계 조회 기능 Control 클래스
Author : 정한얼
Created : 2023/05/25
*/
class ViewJobApplicationStatistics {
private:
    ViewJobApplicationStatisticsUI* viewJobApplicationStatisticsUI;
public:
    ViewJobApplicationStatistics();
    vector<pair<string, int>> showJobApplicationStatistics();
    ViewJobApplicationStatisticsUI* getUI();
};


#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICS_H
