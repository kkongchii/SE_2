#ifndef USERMANAGEMENT_CANCELJOBAPPLICATIONUI_H
#define USERMANAGEMENT_CANCELJOBAPPLICATIONUI_H

#include <iostream>
#include <string>
#include <tuple>
#include "CancelJobApplication.h"

using namespace std;
class CancelJobApplication;

class CancelJobApplicationUI {
private:
    CancelJobApplication* cancelJobApplicationControl;
public:
    CancelJobApplicationUI(CancelJobApplication* cancelJobApplication);
    void startInterface();
    void cancelJobApplication(ofstream& out_file, int SSN);
    CancelJobApplication* getControl();
};


#endif //USERMANAGEMENT_CANCELJOBAPPLICATIONUI_H
