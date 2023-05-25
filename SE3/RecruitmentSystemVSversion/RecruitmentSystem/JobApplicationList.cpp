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
    for (auto it = this->ownedJobApplication.begin(); it != this->ownedJobApplication.end(); ++it) {
        if ((*it) == recruitment) { 
            this->ownedJobApplication.erase(it); 
            return 0;
        }
    }
    return -1;
}


#endif //USERMANAGEMENT_JOBAPPLICATIONLIST_CPP

