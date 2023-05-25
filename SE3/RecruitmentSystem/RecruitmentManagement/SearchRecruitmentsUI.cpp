
#ifndef USERMANAGEMENT_SEARCHRECRUITMENTSUI_CPP
#define USERMANAGEMENT_SEARCHRECRUITMENTSUI_CPP

#include "SearchRecruitmentsUI.h"
#include <fstream>


using namespace std;

SearchRecruitmentsUI::SearchRecruitmentsUI(SearchRecruitments* searchRecruitmentsControl) {
    this->searchRecruitmentsControl = searchRecruitmentsControl;
    // �Ű������� ���� Control Class�� ������ ������ ����
}

void SearchRecruitmentsUI::startInterface() {
    // UI�� ���
    // �ش� ���������� �̱���
}

void SearchRecruitmentsUI::searchRecruitments(ofstream& out_file, string companyName) {
    vector<tuple<string, int, string, int, string, int>> printRecruitment = searchRecruitmentsControl->showRecruitment(companyName); // 2.1

    // Output to file
    for (int i = 0; i < printRecruitment.size(); i++) {
        out_file << "> " << get<0>(printRecruitment[i]) << " " << get<1>(printRecruitment[i]) << " "
                 << get<2>(printRecruitment[i]) << " " << get<3>(printRecruitment[i]) << " "
                 << get<4>(printRecruitment[i]) << endl;
    }
}


SearchRecruitments* SearchRecruitmentsUI::getControl() {
    return this->searchRecruitmentsControl;
}

#endif //USERMANAGEMENT_SEARCHRECRUITMENTSUI_CPP

