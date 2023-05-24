
#ifndef USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP
#define USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP

#include "ApplyForRecruitmentUI.h"

using namespace std;

ApplyForRecruitmentUI::ApplyForRecruitmentUI(ApplyForRecruitment* applyforrecruitmentControl) {
    this->applyforrecruitmentControl = applyforrecruitmentControl;
    // �Ű������� ���� Control Class�� ������ ������ ����
}

void ApplyForRecruitmentUI::startInterface() {
    cout << "start Interface" << endl;
    // UI�� ���
}

void ApplyForRecruitmentUI::applyForRecruitment(int SSN) {
    tuple<string, int, string> applyforprint = applyforrecruitmentControl->addNewJobApplication(SSN);

    // Ȯ�ο�
    cout << get<0>(applyforprint) << get<1>(applyforprint) << get<2>(applyforprint) << endl;
}

ApplyForRecruitment* ApplyForRecruitmentUI::getControl() {
    return this->applyforrecruitmentControl;
}

#endif //USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP