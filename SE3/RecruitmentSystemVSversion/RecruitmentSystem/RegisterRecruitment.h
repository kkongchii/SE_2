
#ifndef USERMANAGEMENT_REGISTERRECRUITMENT_H
#define USERMANAGEMENT_REGISTERRECRUITMENT_H

#include "RegisterRecruitmentsUI.h"
#include "CompanyUser.h"

class RegisterRecruitmentsUI;
using namespace std;

/*
Class : RegisterRecruitment
Description: 채용 정보 등록 기능을 담당하는 Control 클래스
Author: 주수진
Created: 2023/05/25
*/
class RegisterRecruitment {
private:
    RegisterRecruitmentsUI* registerRecruitmentsUI;
public:
    RegisterRecruitment();
    void addNewRecruitments(string task, int limitApplicantNum, string deadLine);
    RegisterRecruitmentsUI* getUI();
};


#endif //USERMANAGEMENT_REGISTERRECRUITMENT_H
