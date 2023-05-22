#ifndef USERMANAGEMENT_JOBAPPLICATIONLIST_H
#define USERMANAGEMENT_JOBAPPLICATIONLIST_H
#include "Recruitment.h"
#include <vector>
using namespace std;

class Recruitment;

class JobApplicationList {
private:
    vector<Recruitment*> ownedJobApplication;
public:
    void addJobApplication(Recruitment* recruitment);
    vector<Recruitment*> getJobApplicationList();
    string deleteJobApplication(Recruitment* recruitment);
};


#endif //USERMANAGEMENT_JOBAPPLICATIONLIST_H
