#ifndef USERMANAGEMENT_RECRUITMENTLIST_CPP
#define USERMANAGEMENT_RECRUITMENTLIST_CPP
#include "RecruitmentList.h"

void RecruitmentList::addNewRecruitment(string task, int limitApplicantNum, string deadline) {
    extern User *currentLoginUser;

    Recruitment* newRecruitment = new Recruitment(task, limitApplicantNum, deadline, (CompanyUser*) currentLoginUser); 
    this->ownedRecruitment.push_back(newRecruitment);
}

vector<Recruitment*> RecruitmentList::getRecruitmentList() {
    return this->ownedRecruitment;
}

#endif //USERMANAGEMENT_RECRUITMENTLIST_CPP

