
#ifndef USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_CPP
#define USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_CPP

#include "InquireCompanyRecruitmentsUI.h"

InquireCompanyRecruitmentsUI::InquireCompanyRecruitmentsUI(
    InquireCompanyRecruitments* inquireCompanyRecruitmentsControl) {
    this->inquireCompanyRecruitmentsControl = inquireCompanyRecruitmentsControl;
}

void InquireCompanyRecruitmentsUI::inquireRecruitments(FILE* fp) {
    vector<tuple<string, int, string, int, string, int>> list = this->inquireCompanyRecruitmentsControl->showRecruitments();
    for (const auto& detail : list) {
        fprintf(fp, "> %s %d %s\n", get<2>(detail).c_str(), get<3>(detail), get<4>(detail).c_str());
    }
}

#endif //USERMANAGEMENT_INQUIRECOMPANYRECRUITMENTSUI_CPP


