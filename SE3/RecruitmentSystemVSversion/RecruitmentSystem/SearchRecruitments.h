
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
Description: 회사 이름으로 채용 정보 검색을 처리해주는 Control 클래스
Author: 이정원
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
