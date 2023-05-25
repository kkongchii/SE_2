
#ifndef USERMANAGEMENT_SEARCHRECRUITMENTS_CPP
#define USERMANAGEMENT_SEARCHRECRUITMENTS_CPP

#include "SearchRecruitments.h"
#include "UserList.h"
#include "RecruitmentList.h"

SearchRecruitments::SearchRecruitments() {
    this->searchRecruitmentsUI = new SearchRecruitmentsUI(this);
}

vector<tuple<std::string, int, std::string, int, std::string, int>> SearchRecruitments::showRecruitment(string companyName) {
    extern UserList userDB; 
    User* searchedUser = userDB.getSpecificUserByName(companyName); 
    CompanyUser* searchedCUser = (CompanyUser*)searchedUser; 
    vector<Recruitment*> searchedRList = searchedCUser->getOwnRecruitmentList()->getRecruitmentList(); 

    vector<tuple<string, int, string, int, string, int>> recruitmentDetail;

    for (const auto& recruitment : searchedRList) {
        recruitmentDetail.push_back(recruitment->getRecruitmentDetails()); 
    }
    return recruitmentDetail;
}
SearchRecruitmentsUI* SearchRecruitments::getUI() {
    return this->searchRecruitmentsUI;
}

#endif //USERMANAGEMENT_SEARCHRECRUITMENTS_CPP
