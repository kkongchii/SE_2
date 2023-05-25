#ifndef USERMANAGEMENT_VIEWRECRUITMENTSTATISTICSUI_CPP
#define USERMANAGEMENT_VIEWRECRUITMENTSTATISTICSUI_CPP

#include "ViewRecruitmentStatisticsUI.h"
#include <fstream>


ViewRecruitmentStatisticsUI::ViewRecruitmentStatisticsUI(ViewRecruitmentStatistics* viewRecruitmentStatistics) {
    this->viewRecruitmentStatisticsControl = viewRecruitmentStatistics;
}

void ViewRecruitmentStatisticsUI::showStatistics(ofstream &out_file) {
    vector<pair<string, int>> recruitmentStatistics = this->viewRecruitmentStatisticsControl->showRecruitmentStatistics();

    for(auto it = recruitmentStatistics.begin(); it != recruitmentStatistics.end(); it++) {
        out_file << "> " << (*it).first << " " << (*it).second << endl;
    }
}

ViewRecruitmentStatistics* ViewRecruitmentStatisticsUI::getControl() {
    return this->viewRecruitmentStatisticsControl;
}

#endif //USERMANAGEMENT_VIEWRECRUITMENTSTATISTICSUI_CPP
