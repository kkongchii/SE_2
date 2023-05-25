#ifndef USERMANAGEMENT_VIEWRECRUITMENTSTATISTICSUI_CPP
#define USERMANAGEMENT_VIEWRECRUITMENTSTATISTICSUI_CPP

#include "ViewRecruitmentStatisticsUI.h"
#include <fstream>

/*
Function : ViewRecruitmentStatisticsUI::ViewRecruitmentStatisticsUI(ViewRecruitmentStatistics* viewRecruitmentStatistics)
Description : ViewRecruitmentStatisticsUI Class ������, ViewRecruitmentStatistics�κ��� ���۷����� ���޹޾� ����
ReturnType : X
Parameter : ViewRecruitmentStatistics* viewRecruitmentStatistics
Author : ���Ѿ�
Created : 2023/05/25
*/
ViewRecruitmentStatisticsUI::ViewRecruitmentStatisticsUI(ViewRecruitmentStatistics* viewRecruitmentStatistics) {
    this->viewRecruitmentStatisticsControl = viewRecruitmentStatistics;
}

/*
Function : void ViewRecruitmentStatisticsUI::showStatistics(ofstream& out_file)
Description : ȸ�� ȸ�� ��� ��ȸ ��ɿ� ���� ����� ����ϴ� �Լ�
ReturnType : void
Parameter : ofstream& out_file
Author : ���Ѿ�
Created : 2023/05/25
*/
void ViewRecruitmentStatisticsUI::showStatistics(ofstream& out_file) {
    vector<pair<string, int>> recruitmentStatistics = this->viewRecruitmentStatisticsControl->showRecruitmentStatistics();

    for (auto it = recruitmentStatistics.begin(); it != recruitmentStatistics.end(); it++) {
        out_file << "> " << (*it).first << " " << (*it).second << endl;
    }
}

/*
Function : ViewRecruitmentStatistics* ViewRecruitmentStatisticsUI::getControl()
Description : ViewRecruitmentStatistics�� ���۷����� ��ȯ�ϴ� Getter
ReturnType : ViewRecruitmentStatistics*
Parameter : X
Author : ���Ѿ�
Created : 2023/05/25
*/
ViewRecruitmentStatistics* ViewRecruitmentStatisticsUI::getControl() {
    return this->viewRecruitmentStatisticsControl;
}

#endif //USERMANAGEMENT_VIEWRECRUITMENTSTATISTICSUI_CPP
