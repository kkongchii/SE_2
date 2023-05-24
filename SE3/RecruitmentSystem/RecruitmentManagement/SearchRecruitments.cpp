
#ifndef USERMANAGEMENT_SEARCHRECRUITMENTS_CPP
#define USERMANAGEMENT_SEARCHRECRUITMENTS_CPP

#include "SearchRecruitments.h"
#include "entity/UserList.h"
#include "entity/RecruitmentList.h"

SearchRecruitments::SearchRecruitments() {
    this->searchRecruitmentsUI = new SearchRecruitmentsUI(this);
    // ���۷��� ��ȯ
}

vector<tuple<std::string, int, std::string, int, std::string, int>> SearchRecruitments::showRecruitment(string companyName) {
    extern UserList userDB; // main �Լ��� ���� �� userDB ���
    User* searchedUser = userDB.getSpecificUserByName(companyName); // ��ȯ���� User*
    CompanyUser* searchedCUser = (CompanyUser*)searchedUser; // RecruitmentList�� �������� ���� CompanyUser�� // 2.1.1
    vector<Recruitment*> searchedRList = searchedCUser->getOwnRecruitmentList()->getRecruitmentList(); // 2.1.2

    // ����Ʈ�� ���� ä�������� �������� ��츦 �����ؼ� �̷� ������ �ߴµ�
    // qna���� ���� ������ ȸ��� �ϳ��� ä�� ������ �����Ѵٰ� �ϰ�
    // �������� �������� ������ ���� ������ ����Ѵ� ��Ұ� ������ ������ ����
    // test case���� �ϳ��� ����ϰ� �߰����� ����� ���� ������ ���δ�
    // ������ �� ��� �׳� tuple �ϳ��� return�ϵ��� �����ϸ� �� �� ����
    
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
