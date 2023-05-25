
#ifndef USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP
#define USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP

#include "ApplyForRecruitmentUI.h"
#include <fstream>

using namespace std;

/*
Function : ApplyForRecruitmentUI::ApplyForRecruitmentUI(ApplyForRecruitment* applyforrecruitmentControl)
Description: 컨트롤 클래스와 래퍼런스를 교환하는 함수
ReturnType: X
Parameter: ApplyForRecruitment* applyforrecruitmentControl
Author: 이정원
Created: 2023/05/25
*/
ApplyForRecruitmentUI::ApplyForRecruitmentUI(ApplyForRecruitment* applyforrecruitmentControl) {
    this->applyForRecruitmentControl = applyforrecruitmentControl;
}

/*
Function : void ApplyForRecruitmentUI::startInterface()
Description: UI를 출력하는 함수, 해당 과제에서는 미구현
ReturnType: Void
Parameter: X
Author: 이정원
Created: 2023/05/25
*/
void ApplyForRecruitmentUI::startInterface() {
    // UI를 출력
    // 해당 과제에서는 미구현
}

/*
Function : void ApplyForRecruitmentUI::applyForRecruitment(ofstream& out_file, int SSN)
Description: 사용자 입력인 사업자 번호를 컨트롤 클래스에 전달하고 컨트롤 클래스에게 받은 채용 정보에 지원 결과를 출력한다.
ReturnType: Void
Parameter: ofstream& out_file, int SSN
Author: 이정원
Created: 2023/05/25
*/
void ApplyForRecruitmentUI::applyForRecruitment(ofstream& out_file, int SSN) {
    tuple<string, int, string> applyForPrint = applyForRecruitmentControl->addNewJobApplication(SSN);

    out_file << "> " << get<0>(applyForPrint) << " " << get<1>(applyForPrint) << " " << get<2>(applyForPrint) << endl;
}

/*
Function : ApplyForRecruitment* ApplyForRecruitmentUI::getControl()
Description: 자신이 갖고 있는 UI 클래스 래퍼런스를 반환한다.
ReturnType: ApplyForRecruitment*
Parameter: X
Author: 이정원
Created: 2023/05/25
*/
ApplyForRecruitment* ApplyForRecruitmentUI::getControl() {
    return this->applyForRecruitmentControl;
}

#endif //USERMANAGEMENT_APPLYFORRECRUITMENTUI_CPP