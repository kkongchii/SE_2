
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
	void startInterface(); // interface ���
	void searchRecruitments(string companyName); // ȸ�� �̸����� �˻�
	SearchRecruitments* getControl();
};


#endif //USERMANAGEMENT_SEARCHRECRUITMENTSUI_H
