#ifndef USERMANAGEMENT_RECRUITMENTLIST_CPP
#define USERMANAGEMENT_RECRUITMENTLIST_CPP
#include "RecruitmentList.h"

/*
Function : bool compareByDeadline(Recruitment* a, Recruitment* b)
Description : 마감일 정렬을 위한 비교 함수, 가장 큰(최신) 마감일이 0번 인덱스로 올 수 있도록 내림차순으로 비교
ReturnType : bool
Parameter : Recruitment* a, Recruitment* b
Author : 정한얼
Created : 2023/05/25
*/
bool compareByDeadline(Recruitment* a, Recruitment* b) {
    return a->getDeadline() > b->getDeadline();
}

/*
Function : void RecruitmentList::addNewRecruitment(string task, int limitApplicantNum, string deadline)
Description : 채용 정보 생성 후 채용 정보 리스트에 추가하는 함수
ReturnType : void
Parameter : string task, int limitApplicantNum, string deadline
Author : 정한얼
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
Description : 채용 정보 리스트(ownedRecruitment) Getter 함수
ReturnType : vector<Recruitment*>
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
vector<Recruitment*> RecruitmentList::getRecruitmentList() {
    return this->ownedRecruitment;
}


#endif //USERMANAGEMENT_RECRUITMENTLIST_CPP

