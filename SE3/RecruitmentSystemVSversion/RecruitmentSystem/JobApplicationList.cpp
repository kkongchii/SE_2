#ifndef USERMANAGEMENT_JOBAPPLICATIONLIST_CPP
#define USERMANAGEMENT_JOBAPPLICATIONLIST_CPP
#include "JobApplicationList.h"

void JobApplicationList::addJobApplication(Recruitment* recruitment) {
    this->ownedJobApplication.push_back(recruitment);
    recruitment->setApplicantNum(recruitment->getApplicantNum() + 1);
}

vector<Recruitment*> JobApplicationList::getJobApplicationList() {
    return this->ownedJobApplication;
}

int JobApplicationList::deleteJobApplication(Recruitment* recruitment) {
    for (auto it = this->ownedJobApplication.begin(); it != this->ownedJobApplication.end(); ++it) { // JobApplication vector에 저장 된 모든 정보를 순회
        if ((*it) == recruitment) { // 인자로 받은 지울 recruitment와 같다면
            this->ownedJobApplication.erase(it); // ownedJobApplication에서 삭제
            return 0;
        }
    }
    return -1;
}


#endif //USERMANAGEMENT_JOBAPPLICATIONLIST_CPP

