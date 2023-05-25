
#ifndef USERMANAGEMENT_SEARCHRECRUITMENTS_CPP
#define USERMANAGEMENT_SEARCHRECRUITMENTS_CPP

#include "SearchRecruitments.h"
#include "UserList.h"
#include "RecruitmentList.h"

/*
Function : SearchRecruitments::SearchRecruitments()
Description: UI 클래스와 레퍼런스를 교환하는 생성자
ReturnType: X
Parameter: X
Author: 이정원
Created: 2023/05/25
*/
SearchRecruitments::SearchRecruitments() {
    this->searchRecruitmentsUI = new SearchRecruitmentsUI(this);
}

/*
Function : vector<tuple<std::string, int, std::string, int, std::string, int>> SearchRecruitments::showRecruitment(string companyName)
Description: UI 클래스에게 받은 회사 이름으로 채용 정보를 검색한 후 해당되는 채용 정보를 UI 클래스로 반환한다.
ReturnType: vector<tuple<std::string, int, std::string, int, std::string, int>>
Parameter: string companyName
Author: 이정원
Created: 2023/05/25
*/
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

/*
Function : SearchRecruitmentsUI* SearchRecruitments::getUI()
Description: 자신이 갖고 있는 UI 클래스 래퍼런스를 반환한다.
ReturnType: SearchRecruitmentsUI*
Parameter: X
Author: 이정원
Created: 2023/05/25
*/
SearchRecruitmentsUI* SearchRecruitments::getUI() {
    return this->searchRecruitmentsUI;
}

#endif //USERMANAGEMENT_SEARCHRECRUITMENTS_CPP
