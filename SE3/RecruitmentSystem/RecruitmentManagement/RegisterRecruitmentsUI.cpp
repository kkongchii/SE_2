
#ifndef USERMANAGEMENT_REGISTERRECRUITMENTSUI_CPP
#define USERMANAGEMENT_REGISTERRECRUITMENTSUI_CPP

#include "RegisterRecruitmentsUI.h"

RegisterRecruitmentsUI::RegisterRecruitmentsUI(RegisterRecruitment *registerRecruitment) {
    this->registerRecruitmentControl = registerRecruitment;
}

void RegisterRecruitmentsUI::startInterface() {
    // 채용 정보를 입력하는 UI를 출력
    // 해당 과제에서는 미구현
}

void RegisterRecruitmentsUI::registerNewRecruitments(FILE *fp, string task, int limitApplicantNum, string deadLine) {
    this->registerRecruitmentControl->addNewRecruitments(task, limitApplicantNum, deadLine);
    fprintf(fp, "> %s %d %s\n", task.c_str(), limitApplicantNum, deadLine.c_str());
}

#endif //USERMANAGEMENT_REGISTERRECRUITMENTSUI_CPP

