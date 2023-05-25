
#ifndef USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_CPP
#define USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_CPP

#include "InquireCompanyRecruitmentsUI.h"
#include <fstream>


InquireCompanyRecruitmentsUI::InquireCompanyRecruitmentsUI(
    InquireCompanyRecruitments* inquireCompanyRecruitmentsControl) {
    this->inquireCompanyRecruitmentsControl = inquireCompanyRecruitmentsControl;
}

void InquireCompanyRecruitmentsUI::inquireRecruitments(ofstream& out_file) {
    vector<tuple<string, int, string, int, string, int>> list = this->inquireCompanyRecruitmentsControl->showRecruitments();
    for (const auto& detail : list) {
        out_file << "> " << get<2>(detail) << " " << get<3>(detail) << " " << get<4>(detail) << endl;
    }
}


#endif //USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_CPP


