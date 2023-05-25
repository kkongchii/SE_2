
#ifndef USERMANAGEMENT_REGISTERRECRUITMENTSUI_CPP
#define USERMANAGEMENT_REGISTERRECRUITMENTSUI_CPP

#include "RegisterRecruitmentsUI.h"
#include <fstream>

/*
Function: RegisterRecruitmentsUI::RegisterRecruitmentsUI(RegisterRecruitment* registerRecruitment)
Description: Control Class와 레퍼런스를 교환하는 생성자
ReturnType: X
Parameter: RegisterRecruitment* registerRecruitment
Author: 주수진
Created: 2023/05/25
*/
RegisterRecruitmentsUI::RegisterRecruitmentsUI(RegisterRecruitment* registerRecruitment) {
    this->registerRecruitmentControl = registerRecruitment;
}

/*
Function: void RegisterRecruitmentsUI::startInterface()
Description: Interface를 출력하는 함수, 해당 과제에서는 미구현
ReturnType: void
Parameter: X
Author: 주수진
Created: 2023/05/25
*/
void RegisterRecruitmentsUI::startInterface() {
    // 채용 정보를 입력하는 UI를 출력하는 기능
    // 해당 과제에서는 미구현
}

/*
Function: void RegisterRecruitmentsUI::registerNewRecruitments(ofstream& out_file, string task, int limitApplicantNum, string deadLine)
Description: Control Class에게 새 채용 정보 등록을 요청하는 함수
ReturnType: void
Parameter: ofstream& out_file, string task, int limitApplicantNum, string deadLine
Author: 주수진
Created: 2023/05/25
*/
void RegisterRecruitmentsUI::registerNewRecruitments(ofstream& out_file, string task, int limitApplicantNum, string deadLine) {
    this->registerRecruitmentControl->addNewRecruitments(task, limitApplicantNum, deadLine);
    out_file << "> " << task << " " << limitApplicantNum << " " << deadLine << endl;
}


#endif //USERMANAGEMENT_REGISTERRECRUITMENTSUI_CPP

