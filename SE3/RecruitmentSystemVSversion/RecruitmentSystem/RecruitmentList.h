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

/*
class : RecruitmentList
Description : 채용 정보 리스트를 위한 Collection Entity 클래스
Author : 정한얼
Created : 2023/05/25
*/
class RecruitmentList {
private:
    vector<Recruitment*> ownedRecruitment;
public:
    void addNewRecruitment(string task, int limitApplicantNum, string deadline);
    vector<Recruitment*> getRecruitmentList();
};


#endif //USERMANAGEMENT_RECRUITMENTLIST_H
