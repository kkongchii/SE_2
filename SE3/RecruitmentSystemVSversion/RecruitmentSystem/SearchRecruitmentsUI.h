
#ifndef USERMANAGEMENT_SEARCHRECRUITMENTSUI_H
#define USERMANAGEMENT_SEARCHRECRUITMENTSUI_H

#include <iostream>
#include <string>
#include "SearchRecruitments.h"

using namespace std;
class SearchRecruitments;

/*
Class : SearchRecruitmentsUI
Description: �Ϲ�ȸ���� ȸ���̸����� ä�� ������ �˻��ϴ� UI Ŭ����
Author: ������
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
