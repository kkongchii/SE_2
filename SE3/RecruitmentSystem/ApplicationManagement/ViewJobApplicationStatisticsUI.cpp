
#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICSUI_CPP
#define USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICSUI_CPP

#include "ViewJobApplicationStatisticsUI.h"

ViewJobApplicationStatisticsUI::ViewJobApplicationStatisticsUI(ViewJobApplicationStatistics* viewJobApplicationStatistics) {
    this->viewJobApplicationStatisticsControl = viewJobApplicationStatistics;
}

void ViewJobApplicationStatisticsUI::showStatistics() {
    vector<pair<string, int>> jobApplicationStatistics = this->viewJobApplicationStatisticsControl->showJobApplicationStatistics();

    for(auto it = jobApplicationStatistics.begin(); it != jobApplicationStatistics.end(); it++) {
        if(it == jobApplicationStatistics.begin()) {
            printf("> %s %d",
                (*it).first.c_str(),
                (*it).second);
        } else {
            printf("  %s %d",
                (*it).first.c_str(),
                (*it).second);
        }
    }
}

ViewJobApplicationStatistics* ViewJobApplicationStatisticsUI::getControl() {
    return this->viewJobApplicationStatisticsControl;
}

#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICSUI_CPP
