
#ifndef USERMANAGEMENT_REGISTERRECRUITMENT_H
#define USERMANAGEMENT_REGISTERRECRUITMENT_H

#include "RegisterRecruitmentsUI.h"
#include "CompanyUser.h"

class RegisterRecruitmentsUI;
using namespace std;

class RegisterRecruitment {
private:
    RegisterRecruitmentsUI* registerRecruitmentsUI;
public:
    RegisterRecruitment();
    void addNewRecruitments(string task, int limitApplicantNum, string deadLine);
    RegisterRecruitmentsUI* getUI();
};


#endif //USERMANAGEMENT_REGISTERRECRUITMENT_H
