


#include "JobApplicationList.h"

JobApplicationList::JobApplicationList() {
    vector<JobApplication*> jobApplicationList;

    // 디버깅용
    Recruitment* re = new Recruitment("companyName2", 111, "task", 10, "2023/05/22");
    Recruitment* re2 = new Recruitment("companyName1", 222, "task", 10, "2023/05/22");
    JobApplication* ja1 = new JobApplication("userName1", re);
    JobApplication* ja2 = new JobApplication("userName2", re2);
    jobApplicationList.push_back(ja1);
    jobApplicationList.push_back(ja2);
    // 디버깅용

    this->jobApplicationList = jobApplicationList;
    
    this->iterator = 0;
}

string JobApplicationList::cancelJobApplicationItem(int companyRegistrationNumber) {
    string canceledJobApplication = "";
    for(auto it = this->jobApplicationList.begin(); it != this->jobApplicationList.end(); it++) {
        if(get<1>((*it)->getJobApplicationDetails()) == companyRegistrationNumber) {
            // Recruitment에서 해당 JobApplication 제거
            (*it)->getAppliedRecruitment()->excludeJobApplication(get<0>((*it)->getJobApplicationDetails()));

            canceledJobApplication = get<2>((*it)->getJobApplicationDetails()) + " " + to_string(get<1>((*it)->getJobApplicationDetails())) + " " + get<3>((*it)->getJobApplicationDetails());

            // JobApplication 제거
            delete (*it);

            // JobApplicationList에서 해당 항목 삭제
            this->jobApplicationList.erase(it);
            break;
        }
    }

    return canceledJobApplication;
}
    
    
vector<JobApplication*> JobApplicationList::getJobApplicationList() {
    return this->jobApplicationList;
}    // getJobApplicationList의 모든 JobApplication*를 가져오는 Getter

tuple<string, int, string, string, int, string> JobApplicationList::findFirst() {
    this->iterator = 0;
    return this->jobApplicationList[this->iterator]->getJobApplicationDetails();
}

tuple<string, int, string, string, int, string> JobApplicationList::getNext() {
    this->iterator++;
    if(this->iterator >= this->jobApplicationList.size()) this->iterator = 0;       
    return this->jobApplicationList[this->iterator]->getJobApplicationDetails();
}

int JobApplicationList::getSize() {
    return this->jobApplicationList.size();
}