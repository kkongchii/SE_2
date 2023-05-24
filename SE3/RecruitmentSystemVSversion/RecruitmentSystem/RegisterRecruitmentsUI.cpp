
#ifndef USERMANAGEMENT_REGISTERRECRUITMENTSUI_CPP
#define USERMANAGEMENT_REGISTERRECRUITMENTSUI_CPP

#include "RegisterRecruitmentsUI.h"

RegisterRecruitmentsUI::RegisterRecruitmentsUI(RegisterRecruitment* registerRecruitment) {
    this->registerRecruitmentControl = registerRecruitment;
}

void RegisterRecruitmentsUI::registerNewRecruitments(string task, int limitApplicantNum, string deadLine) {
    this->registerRecruitmentControl->addNewRecruitments(task, limitApplicantNum, deadLine);
    cout << task << " " << limitApplicantNum << " " << deadLine << endl;
}

#endif //USERMANAGEMENT_REGISTERRECRUITMENTSUI_CPP

