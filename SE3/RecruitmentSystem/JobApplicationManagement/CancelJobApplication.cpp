
#include "CancelJobApplication.h"

CancelJobApplication::CancelJobApplication() {
    this->cancelJobApplicationUI = new CancelJobApplicationUI(this);
}

string CancelJobApplication::cancelJobApplication(GeneralUser *currentUser, int companyRegistrationNumber) {
    JobApplicationList jobApplicationList = currentUser->listJobApplication();
    
    return jobApplicationList.cancelJobApplicationItem(companyRegistrationNumber);
}

CancelJobApplicationUI* CancelJobApplication::getUI() {
    return this->cancelJobApplicationUI;
}