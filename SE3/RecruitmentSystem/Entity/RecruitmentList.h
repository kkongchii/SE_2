#ifndef ENTITY_RECRUITMENT_LIST_H
#define ENTITY_RECRUITMENT_LIST_H
#include <iostream>
#include <string>
#include <vector>
#include "Recruitment.h"
using namespace std;

class RecruitmentList{
private:
    vector<Recruitment*> recruitmentList;
public:
    RecruitmentList();
};

#endif