
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
Description : ȸ�� ȸ�� ��� ��ȸ ��� Control Ŭ����
Author : ���Ѿ�
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
