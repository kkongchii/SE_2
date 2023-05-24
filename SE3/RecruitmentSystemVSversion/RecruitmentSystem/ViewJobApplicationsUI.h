#ifndef USERMANAGEMENT_VIEWJOBAPPLICATIONSUI_H
#define USERMANAGEMENT_VIEWJOBAPPLICATIONSUI_H

#include <iostream>
#include <stdio.h>
#include <string>
#include "ViewJobApplications.h"

using namespace std;
class ViewJobApplications;

class ViewJobApplicationsUI {
private:
    ViewJobApplications* viewJobApplicationsControl;
public:
    ViewJobApplicationsUI(ViewJobApplications* viewJobApplicationsControl);
    void showJobApplication();
    ViewJobApplications* getControl();
};


#endif //USERMANAGEMENT_VIEWJOBAPPLICATIONSUI_H
