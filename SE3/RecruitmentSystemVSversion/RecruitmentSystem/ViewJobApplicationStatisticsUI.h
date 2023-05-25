
#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICSUI_H
#define USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICSUI_H

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "ViewJobApplicationStatistics.h"

using namespace std;
class ViewJobApplicationStatistics;

/*
class : ViewJobApplicationStatisticsUI
Description : �Ϲ� ȸ�� ��� ��ȸ ��� Boundary Ŭ����
Author : ���Ѿ�
Created : 2023/05/25
*/
class ViewJobApplicationStatisticsUI {
private:
    ViewJobApplicationStatistics* viewJobApplicationStatisticsControl;
public:
    ViewJobApplicationStatisticsUI(ViewJobApplicationStatistics* viewJobApplicationStatistics);
    void showStatistics(ofstream& out_file);
    ViewJobApplicationStatistics* getControl();
};


#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICSUI_H
