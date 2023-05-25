#ifndef USERMANAGEMENT_VIEWRECRUITMENTSTATISTICSUI_CPP
#define USERMANAGEMENT_VIEWRECRUITMENTSTATISTICSUI_CPP

#include "ViewRecruitmentStatisticsUI.h"
#include <fstream>

/*
Function : ViewRecruitmentStatisticsUI::ViewRecruitmentStatisticsUI(ViewRecruitmentStatistics* viewRecruitmentStatistics)
Description : ViewRecruitmentStatisticsUI Class 생성자, ViewRecruitmentStatistics로부터 레퍼런스를 전달받아 저장
ReturnType : X
Parameter : ViewRecruitmentStatistics* viewRecruitmentStatistics
Author : 정한얼
Created : 2023/05/25
*/
ViewRecruitmentStatisticsUI::ViewRecruitmentStatisticsUI(ViewRecruitmentStatistics* viewRecruitmentStatistics) {
    this->viewRecruitmentStatisticsControl = viewRecruitmentStatistics;
}

/*
Function : void ViewRecruitmentStatisticsUI::showStatistics(ofstream& out_file)
Description : 회사 회원 통계 조회 기능에 대한 결과를 출력하는 함수
ReturnType : void
Parameter : ofstream& out_file
Author : 정한얼
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
Description : ViewRecruitmentStatistics의 레퍼런스를 반환하는 Getter
ReturnType : ViewRecruitmentStatistics*
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
ViewRecruitmentStatistics* ViewRecruitmentStatisticsUI::getControl() {
    return this->viewRecruitmentStatisticsControl;
}

#endif //USERMANAGEMENT_VIEWRECRUITMENTSTATISTICSUI_CPP
