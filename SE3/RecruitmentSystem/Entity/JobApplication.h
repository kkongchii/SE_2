#ifndef ENTITY_JOBAPPLICATION_H
#define ENTITY_JOBAPPLICATION_H
#include <iostream>
#include <tuple>
#include <string>
#include "Recruitment.h"

#define MAX_LENGTH 100

using namespace std;

class Recruitment;

class JobApplication{
private:
    string userName;
    int companyRegistrationNumber;
    string companyName;
    string task;
    int limitApplicantNum;
    string deadline;
    
    Recruitment* appliedRecruitment;
public:
    JobApplication(string userName, Recruitment* appliedRecruitment); // JobApplication Class 생성자

    // Getter
    tuple<string, int, string, string, int, string> getJobApplicationDetails();
    string getJobApplicationTask();
    Recruitment* getAppliedRecruitment();
};

#endif