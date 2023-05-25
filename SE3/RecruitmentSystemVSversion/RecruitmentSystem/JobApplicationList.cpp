#ifndef USERMANAGEMENT_JOBAPPLICATIONLIST_CPP
#define USERMANAGEMENT_JOBAPPLICATIONLIST_CPP
#include "JobApplicationList.h"

/*
Function : void JobApplicationList::addJobApplication(Recruitment* recruitment)
Description : ���� �� ���� ���� ����Ʈ�� ������ ä�� ������ �߰��ϴ� �Լ�
ReturnType : void
Parameter : Recruitment* recruitment
Author : ���Ѿ�
Created : 2023/05/25
*/
void JobApplicationList::addJobApplication(Recruitment* recruitment) {
    this->ownedJobApplication.push_back(recruitment);
    recruitment->setApplicantNum(recruitment->getApplicantNum() + 1);
}

/*
Function : vector<Recruitment*> JobApplicationList::getJobApplicationList()
Description : ���� ���� ����Ʈ(ownedJobApplication) Getter �Լ�
ReturnType : vector<Recruitment*>
Parameter : X
Author : ���Ѿ�
Created : 2023/05/25
*/
vector<Recruitment*> JobApplicationList::getJobApplicationList() {
    return this->ownedJobApplication;
}

/*
Function : int JobApplicationList::deleteJobApplication(Recruitment* recruitment)
Description : ���� ���� ����Ʈ(ownedJobApplication)���� Ư�� ä�� ������ �����ϴ� �Լ�
ReturnType : int
Parameter : Recruitment* recruitment
Author : ���Ѿ�
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

