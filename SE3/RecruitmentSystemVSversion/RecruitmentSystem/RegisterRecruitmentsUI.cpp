
#ifndef USERMANAGEMENT_REGISTERRECRUITMENTSUI_CPP
#define USERMANAGEMENT_REGISTERRECRUITMENTSUI_CPP

#include "RegisterRecruitmentsUI.h"
#include <fstream>


RegisterRecruitmentsUI::RegisterRecruitmentsUI(RegisterRecruitment* registerRecruitment) {
    this->registerRecruitmentControl = registerRecruitment;
}

void RegisterRecruitmentsUI::startInterface() {
    // 채용 정보를 입력하는 UI를 출력
    // 해당 과제에서는 미구현
}

void RegisterRecruitmentsUI::registerNewRecruitments(ofstream& out_file, string task, int limitApplicantNum, string deadLine) {
    this->registerRecruitmentControl->addNewRecruitments(task, limitApplicantNum, deadLine);
    out_file << "> " << task << " " << limitApplicantNum << " " << deadLine << endl;
}


#endif //USERMANAGEMENT_REGISTERRECRUITMENTSUI_CPP

