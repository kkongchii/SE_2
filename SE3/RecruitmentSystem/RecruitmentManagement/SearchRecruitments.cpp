
#ifndef USERMANAGEMENT_SEARCHRECRUITMENTS_CPP
#define USERMANAGEMENT_SEARCHRECRUITMENTS_CPP

#include "SearchRecruitments.h"
#include "entity/UserList.h"
#include "entity/RecruitmentList.h"

SearchRecruitments::SearchRecruitments() {
    this->searchRecruitmentsUI = new SearchRecruitmentsUI(this);
    // 레퍼런스 교환
}

vector<tuple<std::string, int, std::string, int, std::string, int>> SearchRecruitments::showRecruitment(string companyName) {
    extern UserList userDB; // main 함수에 선언 된 userDB 사용
    User* searchedUser = userDB.getSpecificUserByName(companyName); // 반환값이 User*
    CompanyUser* searchedCUser = (CompanyUser*)searchedUser; // RecruitmentList를 가져오기 위해 CompanyUser로 // 2.1.1
    vector<Recruitment*> searchedRList = searchedCUser->getOwnRecruitmentList()->getRecruitmentList(); // 2.1.2

    // 리스트에 속한 채용정보가 여러개일 경우를 생각해서 이런 식으로 했는데
    // qna에서 현재 시점에 회사당 하나만 채용 정보가 존재한다고 하고
    // 명세서에는 마감일이 지나지 않은 정보만 출력한다 요소가 없어진 것으로 보아
    // test case에서 하나만 등록하고 추가적인 등록은 없을 것으로 보인다
    // 오류가 날 경우 그냥 tuple 하나만 return하도록 변경하면 될 것 같다
    
    vector<tuple<string, int, string, int, string, int>> recruitmentDetail;

    for (const auto& recruitment : searchedRList) {
        recruitmentDetail.push_back(recruitment->getRecruitmentDetails()); // 2.1.3
    }
    return recruitmentDetail;
}
SearchRecruitmentsUI* SearchRecruitments::getUI() {
    return this->searchRecruitmentsUI;
}

#endif //USERMANAGEMENT_SEARCHRECRUITMENTS_CPP
