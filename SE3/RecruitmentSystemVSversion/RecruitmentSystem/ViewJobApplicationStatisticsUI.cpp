
#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICSUI_CPP
#define USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICSUI_CPP

#include "ViewJobApplicationStatisticsUI.h"
#include <fstream>

/*
Function : ViewJobApplicationStatisticsUI::ViewJobApplicationStatisticsUI(ViewJobApplicationStatistics* viewJobApplicationStatistics)
Description : ViewJobApplicationStatisticsUI Class 생성자, ViewJobApplicationStatistics로부터 레퍼런스를 전달받아 저장
ReturnType : X
Parameter : ViewJobApplicationStatistics* viewJobApplicationStatistics
Author : 정한얼
Created : 2023/05/25
*/
ViewJobApplicationStatisticsUI::ViewJobApplicationStatisticsUI(ViewJobApplicationStatistics* viewJobApplicationStatistics) {
    this->viewJobApplicationStatisticsControl = viewJobApplicationStatistics;
}

/*
Function : void ViewJobApplicationStatisticsUI::showStatistics(ofstream& out_file) 
Description : 일반 회원 통계 조회 기능에 대한 결과를 출력하는 함수
ReturnType : void
Parameter : ofstream& out_file
Author : 정한얼
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
Description : ViewJobApplicationStatistics의 레퍼런스를 반환하는 Getter
ReturnType : ViewJobApplicationStatistics*
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
ViewJobApplicationStatistics* ViewJobApplicationStatisticsUI::getControl() {
    return this->viewJobApplicationStatisticsControl;
}

#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICSUI_CPP
