
#ifndef USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_CPP
#define USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_CPP

#include "InquireCompanyRecruitmentsUI.h"
#include <fstream>

/*
Function: InquireCompanyRecruitmentsUI::InquireCompanyRecruitmentsUI(InquireCompanyRecruitments* inquireCompanyRecruitmentsControl)
Description: Control Class와 레퍼런스를 교환하는 생성자
ReturnType: X
Parameter: X
Author: 주수진
Created: 2023/05/25
*/
InquireCompanyRecruitmentsUI::InquireCompanyRecruitmentsUI(
    InquireCompanyRecruitments* inquireCompanyRecruitmentsControl) {
    this->inquireCompanyRecruitmentsControl = inquireCompanyRecruitmentsControl;
}


/*
Function: void InquireCompanyRecruitmentsUI::inquireRecruitments(ofstream& out_file)
Description: Control Class에게 자사 채용 정보 조회를 요청하는 함수
ReturnType: X
Parameter: ofstream& out_file
Author: 주수진
Created: 2023/05/25
*/
void InquireCompanyRecruitmentsUI::inquireRecruitments(ofstream& out_file) {
    vector<tuple<string, int, string, int, string, int>> list = this->inquireCompanyRecruitmentsControl->showRecruitments();
    for (const auto& detail : list) {
        out_file << "> " << get<2>(detail) << " " << get<3>(detail) << " " << get<4>(detail) << endl;
    }
}


#endif //USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_CPP


