
#ifndef USERMANAGEMENT_SEARCHRECRUITMENTSUI_CPP
#define USERMANAGEMENT_SEARCHRECRUITMENTSUI_CPP

#include "SearchRecruitmentsUI.h"

using namespace std;

SearchRecruitmentsUI::SearchRecruitmentsUI(SearchRecruitments* searchRecruitmentsControl) {
    this->searchRecruitmentsControl = searchRecruitmentsControl;
    // �Ű������� ���� Control Class�� ������ ������ ����
}

void SearchRecruitmentsUI::startInterface() {
    cout << "start Interface" << endl;
    // UI�� ���
    // �ش� ���������� �̱���
}

void SearchRecruitmentsUI::searchRecruitments(string companyName) {
    vector<tuple<string, int, string, int, string, int>> printRecruitment = searchRecruitmentsControl->showRecruitment(companyName); // 2.1

    // Ȯ�ο�
    for (int i = 0; i < printRecruitment.size(); i++)
        cout << get<0>(printRecruitment[i]) << ' ' << get<1>(printRecruitment[i]) << ' ' << get<2>(printRecruitment[i]) << ' ' << get<3>(printRecruitment[i]) << ' ' << get<4>(printRecruitment[i]) << endl;
}

SearchRecruitments* SearchRecruitmentsUI::getControl() {
    return this->searchRecruitmentsControl;
}

#endif //USERMANAGEMENT_SEARCHRECRUITMENTSUI_CPP

