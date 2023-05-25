
#ifndef USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_H
#define USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_H

#include <vector>
#include <tuple>
#include "Recruitment.h"
#include "InquireCompanyRecruitments.h"

class InquireCompanyRecruitments;
using namespace std;

/*
Class: InquireCompanyRecruitmentsUI
Description: 자사 채용 정보 조회 기능의 입출력을 담당하는 UI 클래스
Author: 주수진
Created: 2023/05/25
*/
class InquireCompanyRecruitmentsUI {
private:
    InquireCompanyRecruitments* inquireCompanyRecruitmentsControl;
public:
    InquireCompanyRecruitmentsUI(InquireCompanyRecruitments* inquireCompanyRecruitmentsControl);
    void inquireRecruitments(ofstream& out_file);
};

#endif //USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_H
