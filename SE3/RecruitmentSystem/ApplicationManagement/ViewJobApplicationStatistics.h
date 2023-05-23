
#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICS_H
#define USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICS_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "ViewJobApplicationStatisticsUI.h"
#include "entity/UserList.h"

using namespace std;
class ViewJobApplicationStatisticsUI;

class ViewJobApplicationStatistics {
private:
    ViewJobApplicationStatisticsUI* viewJobApplicationStatisticsUI;
public:
    ViewJobApplicationStatistics();
    vector<pair<string, int>> showJobApplicationStatistics();
    ViewJobApplicationStatisticsUI* getUI();
};


#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONSTATISTICS_H
