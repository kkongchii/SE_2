
#ifndef USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_H
#define USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_H
#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include "InquireCompanyRecruitmentsUI.h"
#include "entity/RecruitmentList.h"


using namespace std;
class InquireCompanyRecruitmentsUI;

class InquireCompanyRecruitments {
private:
    InquireCompanyRecruitmentsUI* inquireCompanyRecruitmentsUI;
public:
    InquireCompanyRecruitments();
    vector<tuple<string, int, string, int, string>> showRecruitments();
    InquireCompanyRecruitmentsUI* getUI();
};


#endif //USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_H
