
#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICSUI_CPP
#define USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICSUI_CPP

#include "ViewJobApplicationStatisticsUI.h"

ViewJobApplicationStatisticsUI::ViewJobApplicationStatisticsUI(ViewJobApplicationStatistics* viewJobApplicationStatistics) {
    this->viewJobApplicationStatisticsControl = viewJobApplicationStatistics;
}

void ViewJobApplicationStatisticsUI::showStatistics() {
    vector<pair<string, int>> jobApplicationStatistics = this->viewJobApplicationStatisticsControl->showJobApplicationStatistics();

    for (const auto& jobApplication : jobApplicationStatistics) {
        printf("> %s %d\n",
            jobApplication.first.c_str(),
            jobApplication.second);
    }
}

ViewJobApplicationStatistics* ViewJobApplicationStatisticsUI::getControl() {
    return this->viewJobApplicationStatisticsControl;
}

#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICSUI_CPP
