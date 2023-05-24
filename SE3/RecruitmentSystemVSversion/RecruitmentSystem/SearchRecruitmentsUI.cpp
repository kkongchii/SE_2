
#ifndef USERMANAGEMENT_SEARCHRECRUITMENTSUI_CPP
#define USERMANAGEMENT_SEARCHRECRUITMENTSUI_CPP

#include "SearchRecruitmentsUI.h"

using namespace std;

SearchRecruitmentsUI::SearchRecruitmentsUI(SearchRecruitments* searchRecruitmentsControl) {
    this->searchRecruitmentsControl = searchRecruitmentsControl;
    // 매개변수로 받은 Control Class를 본인의 변수에 저장
}

void SearchRecruitmentsUI::startInterface() {
    // UI를 출력
    // 해당 과제에서는 미구현
}

void SearchRecruitmentsUI::searchRecruitments(FILE* fp, string companyName) {
    vector<tuple<string, int, string, int, string, int>> printRecruitment = searchRecruitmentsControl->showRecruitment(companyName); // 2.1

    // 확인용
    for (int i = 0; i < printRecruitment.size(); i++) {
        fprintf(fp, "> %s %d %s %d %s\n", get<0>(printRecruitment[i]).c_str(), get<1>(printRecruitment[i]),
            get<2>(printRecruitment[i]).c_str(), get<3>(printRecruitment[i]), get<4>(printRecruitment[i]).c_str());
    }
}

SearchRecruitments* SearchRecruitmentsUI::getControl() {
    return this->searchRecruitmentsControl;
}

#endif //USERMANAGEMENT_SEARCHRECRUITMENTSUI_CPP

