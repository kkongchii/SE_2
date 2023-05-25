
#ifndef USERMANAGEMENT_SEARCHRECRUITMENTSUI_H
#define USERMANAGEMENT_SEARCHRECRUITMENTSUI_H

#include <iostream>
#include <string>
#include "SearchRecruitments.h"

using namespace std;
class SearchRecruitments;

/*
Class : SearchRecruitmentsUI
Description: 일반회원이 회사이름으로 채용 정보를 검색하는 UI 클래스
Author: 이정원
Created: 2023/05/25
*/
class SearchRecruitmentsUI
{
private:
	SearchRecruitments* searchRecruitmentsControl;
public:
	SearchRecruitmentsUI(SearchRecruitments* searchRecruitmentsControl);
	void startInterface(); 
	void searchRecruitments(ofstream& out_file, string companyName); 
	SearchRecruitments* getControl();
};


#endif //USERMANAGEMENT_SEARCHRECRUITMENTSUI_H
