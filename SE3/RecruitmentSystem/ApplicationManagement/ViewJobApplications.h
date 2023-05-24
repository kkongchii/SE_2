
#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONS_H
#define USERMANAGEMENT_VIEWJOBAPPLICATIONS_H

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <tuple>
#include "ViewJobApplicationsUI.h"
#include "entity/UserList.h"

using namespace std;
class ViewJobApplicationsUI;

class ViewJobApplications {
private:
    ViewJobApplicationsUI* viewJobApplicationsUI;
public:
    ViewJobApplications();
    vector<tuple<string, int, string, int, string, int>> showUsersJobApplication();
    ViewJobApplicationsUI* getUI();
};


#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONS_H
