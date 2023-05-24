
#ifndef USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_CPP
#define USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_CPP

#include "InquireCompanyRecruitmentsUI.h"

InquireCompanyRecruitmentsUI::InquireCompanyRecruitmentsUI(
        InquireCompanyRecruitments *inquireCompanyRecruitmentsControl) {
    this->inquireCompanyRecruitmentsControl = inquireCompanyRecruitmentsControl;
}

void InquireCompanyRecruitmentsUI::inquireRecruitments() {
    vector<tuple<string, int, string, int, string>> list = this->inquireCompanyRecruitmentsControl->showRecruitments();
    cout << "get Recruitment List" << endl;
    for(const auto& detail : list){
        cout << get<2>(detail) << " " << get<3>(detail) << " " << get<4>(detail) << endl;
    }
}


#endif //USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_CPP


