
#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICSUI_CPP
#define USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICSUI_CPP

#include "ViewJobApplicationStatisticsUI.h"
#include <fstream>

/*
Function : ViewJobApplicationStatisticsUI::ViewJobApplicationStatisticsUI(ViewJobApplicationStatistics* viewJobApplicationStatistics)
Description : ViewJobApplicationStatisticsUI Class ������, ViewJobApplicationStatistics�κ��� ���۷����� ���޹޾� ����
ReturnType : X
Parameter : ViewJobApplicationStatistics* viewJobApplicationStatistics
Author : ���Ѿ�
Created : 2023/05/25
*/
ViewJobApplicationStatisticsUI::ViewJobApplicationStatisticsUI(ViewJobApplicationStatistics* viewJobApplicationStatistics) {
    this->viewJobApplicationStatisticsControl = viewJobApplicationStatistics;
}

/*
Function : void ViewJobApplicationStatisticsUI::showStatistics(ofstream& out_file) 
Description : �Ϲ� ȸ�� ��� ��ȸ ��ɿ� ���� ����� ����ϴ� �Լ�
ReturnType : void
Parameter : ofstream& out_file
Author : ���Ѿ�
Created : 2023/05/25
*/
void ViewJobApplicationStatisticsUI::showStatistics(ofstream& out_file) {
    vector<pair<string, int>> jobApplicationStatistics = this->viewJobApplicationStatisticsControl->showJobApplicationStatistics();

    for (const auto& jobApplication : jobApplicationStatistics) {
        out_file << "> " << jobApplication.first << " " << jobApplication.second << endl;
    }
}

/*
Function : ViewJobApplicationStatistics* ViewJobApplicationStatisticsUI::getControl()
Description : ViewJobApplicationStatistics�� ���۷����� ��ȯ�ϴ� Getter
ReturnType : ViewJobApplicationStatistics*
Parameter : X
Author : ���Ѿ�
Created : 2023/05/25
*/
ViewJobApplicationStatistics* ViewJobApplicationStatisticsUI::getControl() {
    return this->viewJobApplicationStatisticsControl;
}

#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICSUI_CPP
