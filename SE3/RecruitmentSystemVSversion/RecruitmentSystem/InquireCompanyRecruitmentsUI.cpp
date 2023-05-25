
#ifndef USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_CPP
#define USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_CPP

#include "InquireCompanyRecruitmentsUI.h"
#include <fstream>

/*
Function: InquireCompanyRecruitmentsUI::InquireCompanyRecruitmentsUI(InquireCompanyRecruitments* inquireCompanyRecruitmentsControl)
Description: Control Class�� ���۷����� ��ȯ�ϴ� ������
ReturnType: X
Parameter: X
Author: �ּ���
Created: 2023/05/25
*/
InquireCompanyRecruitmentsUI::InquireCompanyRecruitmentsUI(
    InquireCompanyRecruitments* inquireCompanyRecruitmentsControl) {
    this->inquireCompanyRecruitmentsControl = inquireCompanyRecruitmentsControl;
}


/*
Function: void InquireCompanyRecruitmentsUI::inquireRecruitments(ofstream& out_file)
Description: Control Class���� �ڻ� ä�� ���� ��ȸ�� ��û�ϴ� �Լ�
ReturnType: X
Parameter: ofstream& out_file
Author: �ּ���
Created: 2023/05/25
*/
void InquireCompanyRecruitmentsUI::inquireRecruitments(ofstream& out_file) {
    vector<tuple<string, int, string, int, string, int>> list = this->inquireCompanyRecruitmentsControl->showRecruitments();
    for (const auto& detail : list) {
        out_file << "> " << get<2>(detail) << " " << get<3>(detail) << " " << get<4>(detail) << endl;
    }
}


#endif //USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_CPP


