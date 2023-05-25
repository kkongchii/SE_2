
#ifndef USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_H
#define USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_H
#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include "InquireCompanyRecruitmentsUI.h"
#include "RecruitmentList.h"


using namespace std;
class InquireCompanyRecruitmentsUI;

/*
Class: InquireCompanyRecruitments
Description: 자사 채용 정보 조회를 담당하는 Control 클래스
Author: 주수진
Created: 2023/05/25
*/
class InquireCompanyRecruitments {
private:
    InquireCompanyRecruitmentsUI* inquireCompanyRecruitmentsUI;
public:
    InquireCompanyRecruitments();
    vector<tuple<string, int, string, int, string, int>> showRecruitments();
    InquireCompanyRecruitmentsUI* getUI();
};


#endif //USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_H
