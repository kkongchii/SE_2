 
 
#include "Recruitment.h"
 
Recruitment::Recruitment(string companyName, int companyRegistrationNumber, string task, int limitApplicantNum, string deadline) {
    this->companyName = companyName;
    this->companyRegistrationNumber = companyRegistrationNumber;
    this->task = task;
    this->limitApplicantNum = limitApplicantNum;
    this->deadline = deadline;

    JobApplicationList* jobApplicationList = new JobApplicationList();
    this->appliedJobApplicationList = jobApplicationList;
}

tuple<string, int, string, int, string> Recruitment::getRecruitmentDetails() {
    return {
        this->companyName,
        this->companyRegistrationNumber,
        this->task,
        this->limitApplicantNum,
        this->deadline
    };
}

void Recruitment::excludeJobApplication(string userName) {
    for(auto it = this->appliedJobApplicationList->getJobApplicationList().begin(); it != this->appliedJobApplicationList->getJobApplicationList().end(); it++) {
        if(get<0>((*it)->getJobApplicationDetails()) == userName) {
            this->appliedJobApplicationList->getJobApplicationList().erase(it);
            break;
        }
    }
}