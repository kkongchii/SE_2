#ifndef USERMANAGEMENT_VIEWRECRUITMENTSTATISTICSUI_CPP
#define USERMANAGEMENT_VIEWRECRUITMENTSTATISTICSUI_CPP

#include "ViewRecruitmentStatisticsUI.h"

ViewRecruitmentStatisticsUI::ViewRecruitmentStatisticsUI(ViewRecruitmentStatistics* viewRecruitmentStatistics) {
    this->viewRecruitmentStatisticsControl = viewRecruitmentStatistics;
}

void ViewRecruitmentStatisticsUI::showStatistics(FILE *fp) {
    vector<pair<string, int>> recruitmentStatistics = this->viewRecruitmentStatisticsControl->showRecruitmentStatistics();

    for(auto it = recruitmentStatistics.begin(); it != recruitmentStatistics.end(); it++) {
        fprintf(fp, "> %s %d\n",
               (*it).first.c_str(),
               (*it).second);
    }
}

ViewRecruitmentStatistics* ViewRecruitmentStatisticsUI::getControl() {
    return this->viewRecruitmentStatisticsControl;
}

#endif //USERMANAGEMENT_VIEWRECRUITMENTSTATISTICSUI_CPP
