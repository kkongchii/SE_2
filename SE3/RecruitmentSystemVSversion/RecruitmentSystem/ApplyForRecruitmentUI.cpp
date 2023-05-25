
#ifndef USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP
#define USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP

#include "ApplyForRecruitmentUI.h"
#include <fstream>


using namespace std;
/*
Function : ApplyForRecruitmentUI::ApplyForRecruitmentUI(ApplyForRecruitment* applyforrecruitmentControl)
Description: 컨트롤 클래스와 레퍼런스를 교환하는 함수
*/
ApplyForRecruitmentUI::ApplyForRecruitmentUI(ApplyForRecruitment* applyforrecruitmentControl) {
    this->applyForRecruitmentControl = applyforrecruitmentControl;
}


void ApplyForRecruitmentUI::startInterface() {
    // UI를 출력
    // 해당 과제에서는 미구현
}

/*
Function : void ApplyForRecruitmentUI::applyForRecruitment(ofstream& out_file, int SSN)
Description: 사용자 입력을 컨트롤 클래스에 전달한다.
*/
void ApplyForRecruitmentUI::applyForRecruitment(ofstream& out_file, int SSN) {
    tuple<string, int, string> applyForPrint = applyForRecruitmentControl->addNewJobApplication(SSN);

    out_file << "> " << get<0>(applyForPrint) << " " << get<1>(applyForPrint) << " " << get<2>(applyForPrint) << endl;
}

/*
Function : ApplyForRecruitment* ApplyForRecruitmentUI::getControl()
Description: 자신이 갖고 있는 컨트롤 클래스 레퍼런스를 반환한다.
*/
ApplyForRecruitment* ApplyForRecruitmentUI::getControl() {
    return this->applyForRecruitmentControl;
}

#endif //USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP