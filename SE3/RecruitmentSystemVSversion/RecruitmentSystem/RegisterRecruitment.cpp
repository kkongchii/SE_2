
#ifndef USERMANAGEMENT_REGISTERRECRUITMENT_CPP
#define USERMANAGEMENT_REGISTERRECRUITMENT_CPP

#include "RegisterRecruitment.h"

/*
Function : RegisterRecruitment::RegisterRecruitment()
Description: UI Class와 레퍼런스를 교환하는 생성자
ReturnType: X
Parameter: X
Author: 주수진
Created: 2023/05/25
*/
RegisterRecruitment::RegisterRecruitment() {
    this->registerRecruitmentsUI = new RegisterRecruitmentsUI(this);
}

/*
Function : void RegisterRecruitment::addNewRecruitments(string task, int limitApplicantNum, string deadLine)
Description: 새로운 Recruitment를 생성하여 현재 로그인 된 회사 유저의 채용 정보 리스트에 추가하는 함수
ReturnType: X
Parameter: string task, int limitApplicantNum, string deadLine
Author: 주수진
Created: 2023/05/25
*/
void RegisterRecruitment::addNewRecruitments(string task, int limitApplicantNum, string deadLine) {
    extern User* currentLoginUser;

    ((CompanyUser*)currentLoginUser)->getOwnRecruitmentList()->addNewRecruitment(task, limitApplicantNum, deadLine);
}

/*
Function : RegisterRecruitmentsUI* RegisterRecruitment::getUI()
Description: 보유 중인 UI Class의 레퍼런스를 리턴
ReturnType: X
Parameter: string task, int limitApplicantNum, string deadLine
Author: 주수진
Created: 2023/05/25
*/
RegisterRecruitmentsUI* RegisterRecruitment::getUI() {
    return this->registerRecruitmentsUI;
}

#endif //USERMANAGEMENT_REGISTERRECRUITMENT_CPP


