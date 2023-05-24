
#ifndef USERMANAGEMENT_SEARCHRECRUITMENTSUI_CPP
#define USERMANAGEMENT_SEARCHRECRUITMENTSUI_CPP

#include "SearchRecruitmentsUI.h"

using namespace std;

SearchRecruitmentsUI::SearchRecruitmentsUI(SearchRecruitments* searchrecruitmentsControl) {
    this->searchrecruitmentsControl = searchrecruitmentsControl;
    // 매개변수로 받은 Control Class를 본인의 변수에 저장
}

void SearchRecruitmentsUI::startInterface() {
    cout << "start Interface" << endl;
    // UI를 출력
    // 해당 과제에서는 미구현
}

void SearchRecruitmentsUI::searchRecruitments(string companyName) {
    vector<tuple<string, int, string, int, string>> printRecruitment = searchrecruitmentsControl->showRecruitment(companyName); // 2.1

    // 확인용
    for (int i = 0; i < printRecruitment.size(); i++)
        cout << get<0>(printRecruitment[i]) << get<1>(printRecruitment[i]) << get<2>(printRecruitment[i]) << get<3>(printRecruitment[i]) << get<4>(printRecruitment[i]);
}

SearchRecruitments* SearchRecruitmentsUI::getControl() {
    return this->searchrecruitmentsControl;
}

#endif //USERMANAGEMENT_SEARCHRECRUITMENTSUI_CPP

