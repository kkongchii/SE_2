
#ifndef USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_CPP
#define USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_CPP

#include "InquireCompanyRecruitments.h"

InquireCompanyRecruitments::InquireCompanyRecruitments() {
    this->inquireCompanyRecruitmentsUI = new InquireCompanyRecruitmentsUI(this);
}

vector<tuple<string, int, string, int, string, int>> InquireCompanyRecruitments::showRecruitments() {
    extern User* currentLoginUser;
    vector<Recruitment*> recruitmentList = ((CompanyUser*)currentLoginUser)->getOwnRecruitmentList()->getRecruitmentList();
    vector<tuple<string, int, string, int, string, int>> recruitmentDetails;

    for (const auto& recruitment : recruitmentList) {
        recruitmentDetails.push_back(recruitment->getRecruitmentDetails());
    }

    return recruitmentDetails;
}

InquireCompanyRecruitmentsUI* InquireCompanyRecruitments::getUI() {
    return this->inquireCompanyRecruitmentsUI;
}


#endif //USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_CPP




