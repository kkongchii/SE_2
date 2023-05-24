#ifndef USERMANAGEMENT_VIEWRECRUITMENTSTATISTICSUI_H
#define USERMANAGEMENT_VIEWRECRUITMENTSTATISTICSUI_H

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "ViewRecruitmentStatistics.h"

using namespace std;
class ViewRecruitmentStatistics;

class ViewRecruitmentStatisticsUI {
private:
    ViewRecruitmentStatistics* viewRecruitmentStatisticsControl;
public:
    ViewRecruitmentStatisticsUI(ViewRecruitmentStatistics* viewRecruitmentStatistics);
    void showStatistics();
    ViewRecruitmentStatistics* getControl();
};


#endif //USERMANAGEMENT_VIEWRECRUITMENTSTATISTICSUI_H
