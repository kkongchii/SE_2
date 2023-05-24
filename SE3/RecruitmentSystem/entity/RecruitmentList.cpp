#ifndef USERMANAGEMENT_RECRUITMENTLIST_CPP
#define USERMANAGEMENT_RECRUITMENTLIST_CPP
#include "RecruitmentList.h"

bool compareByDeadline(Recruitment *a, Recruitment *b) {
    cout << "compare\n";
    return a->getDeadline() > b->getDeadline();
}

void RecruitmentList::addNewRecruitment(string task, int limitApplicantNum, string deadline) {
    extern User *currentLoginUser;

    Recruitment* newRecruitment = new Recruitment(task, limitApplicantNum, deadline, (CompanyUser*) currentLoginUser);

    this->ownedRecruitment.push_back(newRecruitment);
    sort(this->ownedRecruitment.begin(), this->ownedRecruitment.end(), compareByDeadline);
}

vector<Recruitment*> RecruitmentList::getRecruitmentList() {
    return this->ownedRecruitment;
}




#endif //USERMANAGEMENT_RECRUITMENTLIST_CPP

