
#ifndef USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP
#define USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP

#include "ApplyForRecruitmentUI.h"

using namespace std;

ApplyForRecruitmentUI::ApplyForRecruitmentUI(ApplyForRecruitment* applyforrecruitmentControl) {
    this->applyForRecruitmentControl = applyforrecruitmentControl;
    // �Ű������� ���� Control Class�� ������ ������ ����
}

void ApplyForRecruitmentUI::startInterface() {
    // UI�� ���
}

void ApplyForRecruitmentUI::applyForRecruitment(FILE* fp, int SSN) {
    tuple<string, int, string> applyForPrint = applyForRecruitmentControl->addNewJobApplication(SSN);

    // Ȯ�ο�
    fprintf(fp, "> %s %d %s\n", get<0>(applyForPrint).c_str(), get<1>(applyForPrint), get<2>(applyForPrint).c_str());
}

ApplyForRecruitment* ApplyForRecruitmentUI::getControl() {
    return this->applyForRecruitmentControl;
}

#endif //USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP