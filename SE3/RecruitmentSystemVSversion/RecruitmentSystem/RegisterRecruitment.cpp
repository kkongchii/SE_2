
#ifndef USERMANAGEMENT_REGISTERRECRUITMENT_CPP
#define USERMANAGEMENT_REGISTERRECRUITMENT_CPP

#include "RegisterRecruitment.h"

RegisterRecruitment::RegisterRecruitment() {
    this->registerRecruitmentsUI = new RegisterRecruitmentsUI(this);
}

void RegisterRecruitment::addNewRecruitments(string task, int limitApplicantNum, string deadLine) {
    extern User* currentLoginUser;

    ((CompanyUser*)currentLoginUser)->getOwnRecruitmentList()->addNewRecruitment(task, limitApplicantNum, deadLine);
}

RegisterRecruitmentsUI* RegisterRecruitment::getUI() {
    return this->registerRecruitmentsUI;
}


#endif //USERMANAGEMENT_REGISTERRECRUITMENT_CPP


