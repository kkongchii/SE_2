
#ifndef USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_CPP
#define USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_CPP

#include "InquireCompanyRecruitments.h"

/*
Function : InquireCompanyRecruitments::InquireCompanyRecruitments()
Description: UI Class와 레퍼런스를 교환하는 생성자
ReturnType: X
Parameter: X
Author: 주수진
Created: 2023/05/25
*/
InquireCompanyRecruitments::InquireCompanyRecruitments() {
    this->inquireCompanyRecruitmentsUI = new InquireCompanyRecruitmentsUI(this);
}

/*
Function : vector<tuple<string, int, string, int, string, int>> InquireCompanyRecruitments::showRecruitments()
Description: 현재 로그인된 회사 유저의 모든 Recruitment 정보를 리턴
ReturnType: vector<tuple<string, int, string, int, string, int>>
Parameter: X
Author: 주수진
Created: 2023/05/25
*/
vector<tuple<string, int, string, int, string, int>> InquireCompanyRecruitments::showRecruitments() {
    extern User* currentLoginUser;
    vector<Recruitment*> recruitmentList = ((CompanyUser*)currentLoginUser)->getOwnRecruitmentList()->getRecruitmentList();
    vector<tuple<string, int, string, int, string, int>> recruitmentDetails;

    for (const auto& recruitment : recruitmentList) {
        recruitmentDetails.push_back(recruitment->getRecruitmentDetails());
    }

    return recruitmentDetails;
}

/*
Function : InquireCompanyRecruitmentsUI* InquireCompanyRecruitments::getUI()
Description: 보유 중인 UI의 레퍼런스를 리턴
ReturnType: InquireCompanyRecruitmentsUI*
Parameter: X
Author: 주수진
Created: 2023/05/25
*/
InquireCompanyRecruitmentsUI* InquireCompanyRecruitments::getUI() {
    return this->inquireCompanyRecruitmentsUI;
}


#endif //USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_CPP




