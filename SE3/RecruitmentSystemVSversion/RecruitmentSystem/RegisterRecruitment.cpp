
#ifndef USERMANAGEMENT_REGISTERRECRUITMENT_CPP
#define USERMANAGEMENT_REGISTERRECRUITMENT_CPP

#include "RegisterRecruitment.h"

/*
Function : RegisterRecruitment::RegisterRecruitment()
Description: UI Class�� ���۷����� ��ȯ�ϴ� ������
ReturnType: X
Parameter: X
Author: �ּ���
Created: 2023/05/25
*/
RegisterRecruitment::RegisterRecruitment() {
    this->registerRecruitmentsUI = new RegisterRecruitmentsUI(this);
}

/*
Function : void RegisterRecruitment::addNewRecruitments(string task, int limitApplicantNum, string deadLine)
Description: ���ο� Recruitment�� �����Ͽ� ���� �α��� �� ȸ�� ������ ä�� ���� ����Ʈ�� �߰��ϴ� �Լ�
ReturnType: X
Parameter: string task, int limitApplicantNum, string deadLine
Author: �ּ���
Created: 2023/05/25
*/
void RegisterRecruitment::addNewRecruitments(string task, int limitApplicantNum, string deadLine) {
    extern User* currentLoginUser;

    ((CompanyUser*)currentLoginUser)->getOwnRecruitmentList()->addNewRecruitment(task, limitApplicantNum, deadLine);
}

/*
Function : RegisterRecruitmentsUI* RegisterRecruitment::getUI()
Description: ���� ���� UI Class�� ���۷����� ����
ReturnType: X
Parameter: string task, int limitApplicantNum, string deadLine
Author: �ּ���
Created: 2023/05/25
*/
RegisterRecruitmentsUI* RegisterRecruitment::getUI() {
    return this->registerRecruitmentsUI;
}

#endif //USERMANAGEMENT_REGISTERRECRUITMENT_CPP


