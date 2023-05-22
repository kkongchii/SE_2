#ifndef USERMANAGEMENT_JOBAPPLICATIONLIST_CPP
#define USERMANAGEMENT_JOBAPPLICATIONLIST_CPP
#include "JobApplicationList.h"

void JobApplicationList::addJobApplication(Recruitment* recruitment) {
    this->ownedJobApplication.push_back(recruitment);
}

vector<Recruitment*> JobApplicationList::getJobApplicationList() {
    return this->ownedJobApplication;
}

string JobApplicationList::deleteJobApplication(Recruitment* recruitment) {
    for(auto it = this->ownedJobApplication.begin(); it != this->ownedJobApplication.end(); it++) {
        if((*it) == recruitment) {
            this->ownedJobApplication.erase(it);
            return get<0>((*it)->getRecruitmentDetails()) + " " + to_string(get<1>((*it)->getRecruitmentDetails())) + " " + get<2>((*it)->getRecruitmentDetails());
        }
    }
    return "There is no item to delete";
}


#endif //USERMANAGEMENT_JOBAPPLICATIONLIST_CPP

