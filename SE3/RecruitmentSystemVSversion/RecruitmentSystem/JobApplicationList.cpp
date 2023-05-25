#ifndef USERMANAGEMENT_JOBAPPLICATIONLIST_CPP
#define USERMANAGEMENT_JOBAPPLICATIONLIST_CPP
#include "JobApplicationList.h"

/*
Function : void JobApplicationList::addJobApplication(Recruitment* recruitment)
Description : 지원 시 지원 정보 리스트에 지원한 채용 정보를 추가하는 함수
ReturnType : void
Parameter : Recruitment* recruitment
Author : 정한얼
Created : 2023/05/25
*/
void JobApplicationList::addJobApplication(Recruitment* recruitment) {
    this->ownedJobApplication.push_back(recruitment);
    recruitment->setApplicantNum(recruitment->getApplicantNum() + 1);
}

/*
Function : vector<Recruitment*> JobApplicationList::getJobApplicationList()
Description : 지원 정보 리스트(ownedJobApplication) Getter 함수
ReturnType : vector<Recruitment*>
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
vector<Recruitment*> JobApplicationList::getJobApplicationList() {
    return this->ownedJobApplication;
}

/*
Function : int JobApplicationList::deleteJobApplication(Recruitment* recruitment)
Description : 지원 정보 리스트(ownedJobApplication)에서 특정 채용 정보를 삭제하는 함수
ReturnType : int
Parameter : Recruitment* recruitment
Author : 정한얼
Created : 2023/05/25
*/
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

