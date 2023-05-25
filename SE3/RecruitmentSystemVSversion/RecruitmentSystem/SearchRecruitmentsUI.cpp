
#ifndef USERMANAGEMENT_SEARCHRECRUITMENTSUI_CPP
#define USERMANAGEMENT_SEARCHRECRUITMENTSUI_CPP

#include "SearchRecruitmentsUI.h"
#include <fstream>


using namespace std;

/*
Function : SearchRecruitmentsUI::SearchRecruitmentsUI(SearchRecruitments* searchRecruitmentsControl)
Description: 컨트롤 클래스와 레퍼런스를 교환하는 생성자
ReturnType: X
Parameter: SearchRecruitments* searchRecruitmentsControl
Author: 이정원
Created: 2023/05/25
*/
SearchRecruitmentsUI::SearchRecruitmentsUI(SearchRecruitments* searchRecruitmentsControl) {
    this->searchRecruitmentsControl = searchRecruitmentsControl;
}

/*
Function : void SearchRecruitmentsUI::startInterface()
Description: UI를 출력하는 함수, 해당 과제에서는 미구현
ReturnType: Void
Parameter: X
Author: 이정원
Created: 2023/05/25
*/
void SearchRecruitmentsUI::startInterface() {
    // UI를 출력
    // 해당 과제에서는 미구현
}


/*
Function : void SearchRecruitmentsUI::searchRecruitments(ofstream& out_file, string companyName)
Description: 사용자 입력인 회사 이름을 컨트롤 클래스에 전달하고 컨트롤 클래스에게서 받은 채용 정보 검색 결과를 출력한다.
ReturnType: Void
Parameter: ofstream& out_file, string companyName
Author: 이정원
Created: 2023/05/25
*/
void SearchRecruitmentsUI::searchRecruitments(ofstream& out_file, string companyName) {
    vector<tuple<string, int, string, int, string, int>> printRecruitment = searchRecruitmentsControl->showRecruitment(companyName); // 2.1

    for (int i = 0; i < printRecruitment.size(); i++) {
        out_file << "> " << get<0>(printRecruitment[i]) << " " << get<1>(printRecruitment[i]) << " "
            << get<2>(printRecruitment[i]) << " " << get<3>(printRecruitment[i]) << " "
            << get<4>(printRecruitment[i]) << endl;
    }
}

/*
Function : SearchRecruitments* SearchRecruitmentsUI::getControl()
Description: 자신이 갖고 있는 컨트롤 클래스 래퍼런스를 반환한다.
ReturnType: SearchRecruitments*
Parameter: X
Author: 이정원
Created: 2023/05/25
*/
SearchRecruitments* SearchRecruitmentsUI::getControl() {
    return this->searchRecruitmentsControl;
}

#endif //USERMANAGEMENT_SEARCHRECRUITMENTSUI_CPP

