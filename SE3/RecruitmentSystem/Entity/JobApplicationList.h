#ifndef ENTITY_JOBAPPLICATION_LIST_H
#define ENTITY_JOBAPPLICATION_LIST_H
#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include "JobApplication.h"
using namespace std;

class JobApplication;

class JobApplicationList{
private:
    vector<JobApplication*> jobApplicationList;
    int iterator;
public:
    JobApplicationList();

    string cancelJobApplicationItem(int companyRegistrationNumber);    // 해당 JobApplication 취소 함수
    vector<JobApplication*> getJobApplicationList();    // getJobApplicationList의 모든 JobApplication*를 가져오는 Getter
    
    tuple<string, int, string, string, int, string> findFirst();
    tuple<string, int, string, string, int, string> getNext();
    int getSize();
};

#endif