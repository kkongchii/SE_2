
#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICSUI_CPP
#define USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICSUI_CPP

#include "ViewJobApplicationStatisticsUI.h"
#include <fstream>


ViewJobApplicationStatisticsUI::ViewJobApplicationStatisticsUI(ViewJobApplicationStatistics* viewJobApplicationStatistics) {
    this->viewJobApplicationStatisticsControl = viewJobApplicationStatistics;
}

void ViewJobApplicationStatisticsUI::showStatistics(ofstream& out_file) {
    vector<pair<string, int>> jobApplicationStatistics = this->viewJobApplicationStatisticsControl->showJobApplicationStatistics();

    for (const auto& jobApplication : jobApplicationStatistics) {
        out_file << "> " << jobApplication.first << " " << jobApplication.second << endl;
    }
}

ViewJobApplicationStatistics* ViewJobApplicationStatisticsUI::getControl() {
    return this->viewJobApplicationStatisticsControl;
}

#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICSUI_CPP
