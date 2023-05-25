#ifndef USERMANAGEMENT_VIEWRECRUITMENTSTATISTICSUI_H
#define USERMANAGEMENT_VIEWRECRUITMENTSTATISTICSUI_H

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "ViewRecruitmentStatistics.h"

using namespace std;
class ViewRecruitmentStatistics;

/*
class : ViewRecruitmentStatisticsUI
Description : 회사 회원 통계 조회 기능 Boundary 클래스
Author : 정한얼
Created : 2022/05/25
*/
class ViewRecruitmentStatisticsUI {
private:
    ViewRecruitmentStatistics* viewRecruitmentStatisticsControl;
public:
    ViewRecruitmentStatisticsUI(ViewRecruitmentStatistics* viewRecruitmentStatistics);
    void showStatistics(ofstream& out_file);
    ViewRecruitmentStatistics* getControl();
};


#endif //USERMANAGEMENT_VIEWRECRUITMENTSTATISTICSUI_H
