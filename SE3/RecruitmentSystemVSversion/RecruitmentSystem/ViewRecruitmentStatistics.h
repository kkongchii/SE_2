
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

class ViewRecruitmentStatistics {
private:
    ViewRecruitmentStatisticsUI* viewRecruitmentStatisticsUI;
public:
    ViewRecruitmentStatistics();
    vector<pair<string,int>> showRecruitmentStatistics();
    ViewRecruitmentStatisticsUI* getUI();
};


#endif //USERMANAGEMENT_VIEWRECRUITMENTSTATISTICS_H
