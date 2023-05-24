
#ifndef USERMANAGEMENT_APPLYFORRECRUITMENT_CPP
#define USERMANAGEMENT_APPLYFORRECRUITMENT_CPP

#include "ApplyForRecruitment.h"
#include "entity/UserList.h"
#include "entity/RecruitmentList.h"
#include "entity/JobApplicationList.h"

ApplyForRecruitment::ApplyForRecruitment() {
    this->applyforrecruitmentUI = new ApplyForRecruitmentUI(this);
    // ���۷��� ��ȯ
}

tuple < string, int, string> ApplyForRecruitment::addNewJobApplication(int SSN) {
    extern UserList userDB; // main �Լ��� ���� �� userDB ���
    extern User* currentLoginUser; // main �Լ��� currentLoginUser�� ���

    CompanyUser* searchedCUser = userDB.getSpecificUserBySSN(SSN); // 2.1.1 ����ڹ�ȣ ���� ȸ��ȸ�� ������
    vector<Recruitment*> searchedRList = searchedCUser->getOwnRecruitmentList()->getRecruitmentList(); // 2.1.2 �� ȸ��ȸ���� ä������ ����Ʈ ������

    // ���� �ƴ϶� ��� �����̹Ƿ� ��ǻ� �ϳ��� ��µǾ� ���´ٰ� ���� �� �� ����
    // �׷��� ���⿡���� for�� �� ��
    Recruitment* addrecruitment = searchedRList[0]; // �ϳ��� ���� ���̶�� �����ؼ�

    // ������ �����ڼ� ����� ���� ä�� ������ �����ڼ� ��Ҹ� �߰��� �Լ� �ʿ�

    ((GeneralUser*)currentLoginUser)->getOwnJobApplicationList()->addJobApplication(addrecruitment); // �������� ���� ���� ����Ʈ�� �߰�

    tuple <string, int, string, int, string> apply = addrecruitment->getRecruitmentDetails();

    // ����ϴ� ���� �� 3����
    return {
        get<0>(apply),
        get<1>(apply),
        get<2>(apply)
    };
}
ApplyForRecruitmentUI* ApplyForRecruitment::getUI() {
    return this->applyforrecruitmentUI;
}


#endif //USERMANAGEMENT_APPLYFORRECRUITMENT_CPP
