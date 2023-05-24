
#ifndef USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP
#define USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP

#include "ApplyForRecruitmentUI.h"

using namespace std;

ApplyForRecruitmentUI::ApplyForRecruitmentUI(ApplyForRecruitment* applyforrecruitmentControl) {
    this->applyforrecruitmentControl = applyforrecruitmentControl;
    // 매개변수로 받은 Control Class를 본인의 변수에 저장
}

void ApplyForRecruitmentUI::startInterface() {
    cout << "start Interface" << endl;
    // UI를 출력
}

void ApplyForRecruitmentUI::applyForRecruitment(int SSN) {
    tuple<string, int, string> applyforprint = applyforrecruitmentControl->addNewJobApplication(SSN);

    // 확인용
    cout << get<0>(applyforprint) << get<1>(applyforprint) << get<2>(applyforprint) << endl;
}

ApplyForRecruitment* ApplyForRecruitmentUI::getControl() {
    return this->applyforrecruitmentControl;
}

#endif //USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP