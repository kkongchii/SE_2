#ifndef USERMANAGEMENT_RECRUITMENTLIST_H
#define USERMANAGEMENT_RECRUITMENTLIST_H
#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include <algorithm>
#include "Recruitment.h"
using namespace std;

class Recruitment;

class RecruitmentList {
private:
    vector<Recruitment*> ownedRecruitment;
public:
    void addNewRecruitment(string task, int limitApplicantNum, string deadline);
    //    bool compareByDeadline(Recruitment* a, Recruitment* b);
    vector<Recruitment*> getRecruitmentList();
};


#endif //USERMANAGEMENT_RECRUITMENTLIST_H
