
#ifndef USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_CPP
#define USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_CPP

#include "InquireCompanyRecruitments.h"

InquireCompanyRecruitments::InquireCompanyRecruitments() {
    this->inquireCompanyRecruitmentsUI = new InquireCompanyRecruitmentsUI(this);
}

vector<tuple<string, int, string, int, string, int>> InquireCompanyRecruitments::showRecruitments() {
    extern User* currentLoginUser;
    vector<Recruitment*> recruitmentList = ((CompanyUser*) currentLoginUser)->getOwnRecruitmentList()->getRecruitmentList();
    vector<tuple<string, int, string, int, string, int>> recruitmentDetails;

    for(const auto& recruitment: recruitmentList){
        recruitmentDetails.push_back(recruitment->getRecruitmentDetails());
    }
//    tuple<string, int, string, int, string> t1("company1", 123, "develop", 30, "22/05/20");
//    recruitmentDetails.push_back(t1);

    return recruitmentDetails;
}

InquireCompanyRecruitmentsUI *InquireCompanyRecruitments::getUI() {
    return this->inquireCompanyRecruitmentsUI;
}


#endif //USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_CPP




