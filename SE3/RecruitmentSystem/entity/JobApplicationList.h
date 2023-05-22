#ifndef USERMANAGEMENT_JOBAPPLICATIONLIST_H
#define USERMANAGEMENT_JOBAPPLICATIONLIST_H
#include "Recruitment.h"
#include <vector>
using namespace std;

class Recruitment;

class JobApplicationList {
private:
    vector<Recruitment*> jobApplicationList;
public:
    vector<Recruitment*> getJobApplicationList();
    void addJobApplication(Recruitment* recruitment);
    void deleteJobApplication();
};


#endif //USERMANAGEMENT_JOBAPPLICATIONLIST_H
