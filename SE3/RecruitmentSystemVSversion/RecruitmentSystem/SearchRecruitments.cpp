
#ifndef USERMANAGEMENT_SEARCHRECRUITMENTS_CPP
#define USERMANAGEMENT_SEARCHRECRUITMENTS_CPP

#include "SearchRecruitments.h"
#include "UserList.h"
#include "RecruitmentList.h"

/*
Function : SearchRecruitments::SearchRecruitments()
Description: UI Ŭ������ ���۷����� ��ȯ�ϴ� ������
ReturnType: X
Parameter: X
Author: ������
Created: 2023/05/25
*/
SearchRecruitments::SearchRecruitments() {
    this->searchRecruitmentsUI = new SearchRecruitmentsUI(this);
}

/*
Function : vector<tuple<std::string, int, std::string, int, std::string, int>> SearchRecruitments::showRecruitment(string companyName)
Description: UI Ŭ�������� ���� ȸ�� �̸����� ä�� ������ �˻��� �� �ش�Ǵ� ä�� ������ UI Ŭ������ ��ȯ�Ѵ�.
ReturnType: vector<tuple<std::string, int, std::string, int, std::string, int>>
Parameter: string companyName
Author: ������
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
Description: �ڽ��� ���� �ִ� UI Ŭ���� ���۷����� ��ȯ�Ѵ�.
ReturnType: SearchRecruitmentsUI*
Parameter: X
Author: ������
Created: 2023/05/25
*/
SearchRecruitmentsUI* SearchRecruitments::getUI() {
    return this->searchRecruitmentsUI;
}

#endif //USERMANAGEMENT_SEARCHRECRUITMENTS_CPP
