#ifndef USERMANAGEMENT_JOBAPPLICATIONLIST_H
#define USERMANAGEMENT_JOBAPPLICATIONLIST_H
#include "Recruitment.h"
#include <vector>
using namespace std;

class Recruitment;

/*
class : JobApplicationList
Description : ���� ���� ����Ʈ�� ���� Collection Entity Ŭ����
Author : ���Ѿ�
Created : 2022/05/25
*/
class JobApplicationList {
private:
    vector<Recruitment*> ownedJobApplication;
public:
    void addJobApplication(Recruitment* recruitment);
    vector<Recruitment*> getJobApplicationList();
    int deleteJobApplication(Recruitment* recruitment);
};


#endif //USERMANAGEMENT_JOBAPPLICATIONLIST_H
