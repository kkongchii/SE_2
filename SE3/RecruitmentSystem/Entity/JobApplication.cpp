

#include "JobApplication.h"

JobApplication::JobApplication(string userName, Recruitment* appliedRecruitment) {
    this->userName = userName;
    this->companyRegistrationNumber = get<1>(appliedRecruitment->getRecruitmentDetails());
    this->companyName = get<0>(appliedRecruitment->getRecruitmentDetails());
    this->task = get<2>(appliedRecruitment->getRecruitmentDetails());
    this->limitApplicantNum = get<3>(appliedRecruitment->getRecruitmentDetails());
    this->deadline = get<4>(appliedRecruitment->getRecruitmentDetails());

    this->appliedRecruitment = appliedRecruitment;
}

tuple<string, int, string, string, int, string> JobApplication::getJobApplicationDetails() {
    return {
        this->userName,
        this->companyRegistrationNumber,
        this->companyName,
        this->task,
        this->limitApplicantNum,
        this->deadline
    };
}


string JobApplication::getJobApplicationTask() {
    return this->task;
}

Recruitment* JobApplication::getAppliedRecruitment() {
    return this->appliedRecruitment;
}