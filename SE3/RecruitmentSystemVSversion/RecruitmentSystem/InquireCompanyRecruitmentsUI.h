
#ifndef USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_H
#define USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_H

#include <vector>
#include <tuple>
#include "Recruitment.h"
#include "InquireCompanyRecruitments.h"

class InquireCompanyRecruitments;
using namespace std;

/*
Class: InquireCompanyRecruitmentsUI
Description: �ڻ� ä�� ���� ��ȸ ����� ������� ����ϴ� UI Ŭ����
Author: �ּ���
Created: 2023/05/25
*/
class InquireCompanyRecruitmentsUI {
private:
    InquireCompanyRecruitments* inquireCompanyRecruitmentsControl;
public:
    InquireCompanyRecruitmentsUI(InquireCompanyRecruitments* inquireCompanyRecruitmentsControl);
    void inquireRecruitments(ofstream& out_file);
};

#endif //USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_H
