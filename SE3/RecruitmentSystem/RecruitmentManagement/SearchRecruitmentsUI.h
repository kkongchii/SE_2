
#ifndef USERMANAGEMENT_SEARCHRECRUITMENTSUI_H
#define USERMANAGEMENT_SEARCHRECRUITMENTSUI_H

#include <iostream>
#include <string>
#include "SearchRecruitments.h"

using namespace std;
class SearchRecruitments;

class SearchRecruitmentsUI
{
private:
	SearchRecruitments* searchRecruitmentsControl;
public:
	SearchRecruitmentsUI(SearchRecruitments* searchRecruitmentsControl);
	void startInterface(); // interface 출력
	void searchRecruitments(string companyName); // 회사 이름으로 검색
	SearchRecruitments* getControl();
};


#endif //USERMANAGEMENT_SEARCHRECRUITMENTSUI_H
