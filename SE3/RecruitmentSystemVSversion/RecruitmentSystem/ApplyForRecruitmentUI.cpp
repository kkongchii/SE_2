
#ifndef USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP
#define USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP

#include "ApplyForRecruitmentUI.h"

using namespace std;

ApplyForRecruitmentUI::ApplyForRecruitmentUI(ApplyForRecruitment* applyforrecruitmentControl) {
    this->applyForRecruitmentControl = applyforrecruitmentControl;
    // 매개변수로 받은 Control Class를 본인의 변수에 저장
}

void ApplyForRecruitmentUI::startInterface() {
    // UI를 출력
}

void ApplyForRecruitmentUI::applyForRecruitment(FILE* fp, int SSN) {
    tuple<string, int, string> applyForPrint = applyForRecruitmentControl->addNewJobApplication(SSN);

    // 확인용
    fprintf(fp, "> %s %d %s\n", get<0>(applyForPrint).c_str(), get<1>(applyForPrint), get<2>(applyForPrint).c_str());
}

ApplyForRecruitment* ApplyForRecruitmentUI::getControl() {
    return this->applyForRecruitmentControl;
}

#endif //USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP