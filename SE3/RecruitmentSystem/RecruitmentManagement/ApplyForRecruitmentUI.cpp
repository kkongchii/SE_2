
#ifndef USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP
#define USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP

#include "ApplyForRecruitmentUI.h"
#include <fstream>


using namespace std;

ApplyForRecruitmentUI::ApplyForRecruitmentUI(ApplyForRecruitment* applyforrecruitmentControl) {
    this->applyForRecruitmentControl = applyforrecruitmentControl;
    // �Ű������� ���� Control Class�� ������ ������ ����
}

void ApplyForRecruitmentUI::startInterface() {
    // UI�� ���
}

void ApplyForRecruitmentUI::applyForRecruitment(ofstream& out_file, int SSN) {
    tuple<string, int, string> applyForPrint = applyForRecruitmentControl->addNewJobApplication(SSN);

    // Output to file
    out_file << "> " << get<0>(applyForPrint) << " " << get<1>(applyForPrint) << " " << get<2>(applyForPrint) << endl;
}


ApplyForRecruitment* ApplyForRecruitmentUI::getControl() {
    return this->applyForRecruitmentControl;
}

#endif //USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP