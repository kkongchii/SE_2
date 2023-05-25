
#ifndef USERMANAGEMENT_REGISTERRECRUITMENTSUI_H
#define USERMANAGEMENT_REGISTERRECRUITMENTSUI_H

#include <iostream>
#include <string>
#include "RegisterRecruitment.h"

class RegisterRecruitment;
using namespace std;

/*
Class : RegisterRecruitmentsUI
Description: 채용 정보 등록 기능의 입출력을 담당하는 UI 클래스
Author: 주수진
Created: 2023/05/25
*/
class RegisterRecruitmentsUI {
private:
    RegisterRecruitment* registerRecruitmentControl;
public:
    RegisterRecruitmentsUI(RegisterRecruitment* registerRecruitment);
    void startInterface();
    void registerNewRecruitments(ofstream& out_file, string task, int limitApplicantNum, string deadLine);
};


#endif //USERMANAGEMENT_REGISTERRECRUITMENTSUI_H
