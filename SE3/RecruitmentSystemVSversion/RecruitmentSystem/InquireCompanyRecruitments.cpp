
#ifndef USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_CPP
#define USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_CPP

#include "InquireCompanyRecruitments.h"

/*
Function : InquireCompanyRecruitments::InquireCompanyRecruitments()
Description: UI Class�� ���۷����� ��ȯ�ϴ� ������
ReturnType: X
Parameter: X
Author: �ּ���
Created: 2023/05/25
*/
InquireCompanyRecruitments::InquireCompanyRecruitments() {
    this->inquireCompanyRecruitmentsUI = new InquireCompanyRecruitmentsUI(this);
}

/*
Function : vector<tuple<string, int, string, int, string, int>> InquireCompanyRecruitments::showRecruitments()
Description: ���� �α��ε� ȸ�� ������ ��� Recruitment ������ ����
ReturnType: vector<tuple<string, int, string, int, string, int>>
Parameter: X
Author: �ּ���
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
Description: ���� ���� UI�� ���۷����� ����
ReturnType: InquireCompanyRecruitmentsUI*
Parameter: X
Author: �ּ���
Created: 2023/05/25
*/
InquireCompanyRecruitmentsUI* InquireCompanyRecruitments::getUI() {
    return this->inquireCompanyRecruitmentsUI;
}


#endif //USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_CPP




