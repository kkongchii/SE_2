
#ifndef USERMANAGEMENT_REGISTERRECRUITMENTSUI_H
#define USERMANAGEMENT_REGISTERRECRUITMENTSUI_H

#include <iostream>
#include <string>
#include "RegisterRecruitment.h"

class RegisterRecruitment;
using namespace std;

class RegisterRecruitmentsUI {
private:
    RegisterRecruitment* registerRecruitmentControl;
public:
    RegisterRecruitmentsUI(RegisterRecruitment* registerRecruitment);
    void registerNewRecruitments(string task, int limitApplicantNum, string deadLine);
};


#endif //USERMANAGEMENT_REGISTERRECRUITMENTSUI_H
