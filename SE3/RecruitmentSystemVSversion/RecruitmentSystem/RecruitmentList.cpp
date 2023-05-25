#ifndef USERMANAGEMENT_RECRUITMENTLIST_CPP
#define USERMANAGEMENT_RECRUITMENTLIST_CPP
#include "RecruitmentList.h"

/*
Function : bool compareByDeadline(Recruitment* a, Recruitment* b)
Description : ������ ������ ���� �� �Լ�, ���� ū(�ֽ�) �������� 0�� �ε����� �� �� �ֵ��� ������������ ��
ReturnType : bool
Parameter : Recruitment* a, Recruitment* b
Author : ���Ѿ�
Created : 2023/05/25
*/
bool compareByDeadline(Recruitment* a, Recruitment* b) {
    return a->getDeadline() > b->getDeadline();
}

/*
Function : void RecruitmentList::addNewRecruitment(string task, int limitApplicantNum, string deadline)
Description : ä�� ���� ���� �� ä�� ���� ����Ʈ�� �߰��ϴ� �Լ�
ReturnType : void
Parameter : string task, int limitApplicantNum, string deadline
Author : ���Ѿ�
Created : 2023/05/25
*/
void RecruitmentList::addNewRecruitment(string task, int limitApplicantNum, string deadline) {
    extern User* currentLoginUser;

    Recruitment* newRecruitment = new Recruitment(task, limitApplicantNum, deadline, (CompanyUser*)currentLoginUser);

    this->ownedRecruitment.push_back(newRecruitment);
    sort(this->ownedRecruitment.begin(), this->ownedRecruitment.end(), compareByDeadline);
}

/*
Function : vector<Recruitment*> RecruitmentList::getRecruitmentList()
Description : ä�� ���� ����Ʈ(ownedRecruitment) Getter �Լ�
ReturnType : vector<Recruitment*>
Parameter : X
Author : ���Ѿ�
Created : 2023/05/25
*/
vector<Recruitment*> RecruitmentList::getRecruitmentList() {
    return this->ownedRecruitment;
}


#endif //USERMANAGEMENT_RECRUITMENTLIST_CPP

