
#ifndef USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_H
#define USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_H

#include <vector>
#include <tuple>
#include "Recruitment.h"
#include "InquireCompanyRecruitments.h"

class InquireCompanyRecruitments;
using namespace std;

class InquireCompanyRecruitmentsUI {
private:
    InquireCompanyRecruitments* inquireCompanyRecruitmentsControl;
public:
    InquireCompanyRecruitmentsUI(InquireCompanyRecruitments* inquireCompanyRecruitmentsControl);
    void inquireRecruitments();
};


#endif //USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_H
