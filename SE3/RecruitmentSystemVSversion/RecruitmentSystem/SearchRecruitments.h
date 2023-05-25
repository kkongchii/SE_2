
#ifndef USERMANAGEMENT_SEARCHRECRUITMENTS_H
#define USERMANAGEMENT_SEARCHRECRUITMENTS_H


#include <iostream>
#include <string>
#include "SearchRecruitmentsUI.h"
#include "Recruitment.h"

using namespace std;
class SearchRecruitmentsUI;

/*
Class : SearchRecruitments
Description: ȸ�� �̸����� ä�� ���� �˻��� ó�����ִ� Control Ŭ����
Author: ������
Created: 2023/05/25
*/
class SearchRecruitments {
private:
    SearchRecruitmentsUI* searchRecruitmentsUI;
public:
    SearchRecruitments();
    vector<tuple<string, int, string, int, string, int>> showRecruitment(string companyName);
    SearchRecruitmentsUI* getUI();
};


#endif //USERMANAGEMENT_SEARCHRECRUITMENTS_H
