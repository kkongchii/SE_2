/*
*   Create by Haneol Jeong on 2023-05-21
*/

#include "CancelJobApplicationUI.h"

CancelJobApplicationUI::CancelJobApplicationUI(CancelJobApplication* cancelJobApplication) {
    this->cancelJobApplicationControl = cancelJobApplication;
}
    
void startInterface();
void CancelJobApplicationUI::selectJobApplication(GeneralUser *currentUser, int companyRegistrationNumber) {
    printf("%s\n\n", this->getControl()->cancelJobApplication(currentUser, companyRegistrationNumber).c_str());
}

CancelJobApplication* CancelJobApplicationUI::getControl() {
    return this->cancelJobApplicationControl;
}