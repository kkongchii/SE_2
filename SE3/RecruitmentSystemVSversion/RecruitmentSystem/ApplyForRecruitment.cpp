
#ifndef USERMANAGEMENT_APPLYFORRECRUITMENT_CPP
#define USERMANAGEMENT_APPLYFORRECRUITMENT_CPP

#include "ApplyForRecruitment.h"
#include "UserList.h"
#include "RecruitmentList.h"
#include "JobApplicationList.h"

ApplyForRecruitment::ApplyForRecruitment() {
    this->applyForRecruitmentUI = new ApplyForRecruitmentUI(this);
    // ���۷��� ��ȯ
}

tuple < string, int, string> ApplyForRecruitment::addNewJobApplication(int SSN) {
    extern UserList userDB; // main �Լ��� ���� �� userDB ���
    extern User* currentLoginUser; // main �Լ��� currentLoginUser�� ���

    CompanyUser* searchedCUser = (CompanyUser*)userDB.getSpecificUserBySSN(SSN); // 2.1.1 ����ڹ�ȣ ���� ȸ��ȸ�� ������
    vector<Recruitment*> searchedRList = searchedCUser->getOwnRecruitmentList()->getRecruitmentList(); // 2.1.2 �� ȸ��ȸ���� ä������ ����Ʈ ������

    // ���� �ƴ϶� ��� �����̹Ƿ� ��ǻ� �ϳ��� ��µǾ� ���´ٰ� ���� �� �� ����
    // �׷��� ���⿡���� for�� �� ��
    Recruitment* addRecruitment = searchedRList[0]; // �ϳ��� ���� ���̶�� �����ؼ�
    // ������ �����ڼ� ����� ���� ä�� ������ �����ڼ� ��Ҹ� �߰��� �Լ� �ʿ�

    ((GeneralUser*)currentLoginUser)->getOwnJobApplicationList()->addJobApplication(addRecruitment); // �������� ���� ���� ����Ʈ�� �߰�

    tuple <string, int, string, int, string, int> apply = addRecruitment->getRecruitmentDetails();

    // ����ϴ� ���� �� 3����
    return {
        get<0>(apply),
        get<1>(apply),
        get<2>(apply)
    };
}
ApplyForRecruitmentUI* ApplyForRecruitment::getUI() {
    return this->applyForRecruitmentUI;
}


#endif //USERMANAGEMENT_APPLYFORRECRUITMENT_CPP
