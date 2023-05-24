#ifndef USERMANAGEMENT_CANCELJOBAPPLICATIONUI_CPP
#define USERMANAGEMENT_CANCELJOBAPPLICATIONUI_CPP

#include "CancelJobApplicationUI.h"

CancelJobApplicationUI::CancelJobApplicationUI(CancelJobApplication* cancelJobApplication) {
    this->cancelJobApplicationControl = cancelJobApplication;
}

void CancelJobApplicationUI::startInterface() {
    // 지원 취소를 위해 본인의 지원정보 리스트를 보여주는 UI를 출력
    // 해당 과제에서는 미구현
}

void CancelJobApplicationUI::cancelJobApplication(FILE* fp, int SSN) {
    tuple<string, int, string> canceledJobApplication = this->cancelJobApplicationControl->dropJobApplication(SSN);
    if (get<1>(canceledJobApplication) == -1) {
        fprintf(fp, "No JobApplication");
    }

    fprintf(fp, "> %s %d %s\n",
           get<0>(canceledJobApplication).c_str(),
           get<1>(canceledJobApplication),
           get<2>(canceledJobApplication).c_str()
    );
}

CancelJobApplication* CancelJobApplicationUI::getControl() {
    return this->cancelJobApplicationControl;
}

#endif //USERMANAGEMENT_CANCELJOBAPPLICATIONUI_CPP
