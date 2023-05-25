
#ifndef USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_H
#define USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_H
#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include "InquireCompanyRecruitmentsUI.h"
#include "RecruitmentList.h"


using namespace std;
class InquireCompanyRecruitmentsUI;

/*
Class: InquireCompanyRecruitments
Description: �ڻ� ä�� ���� ��ȸ�� ����ϴ� Control Ŭ����
Author: �ּ���
Created: 2023/05/25
*/
class InquireCompanyRecruitments {
private:
    InquireCompanyRecruitmentsUI* inquireCompanyRecruitmentsUI;
public:
    InquireCompanyRecruitments();
    vector<tuple<string, int, string, int, string, int>> showRecruitments();
    InquireCompanyRecruitmentsUI* getUI();
};


#endif //USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTS_H
