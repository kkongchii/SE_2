
#ifndef USERMANAGEMENT_SEARCHRECRUITMENTS_H
#define USERMANAGEMENT_SEARCHRECRUITMENTS_H


#include <iostream>
#include "SearchRecruitmentsUI.h"
#include "entity/Recruitment.h"

using namespace std;
class SearchRecruitmentsUI;

class SearchRecruitments {
private:
    SearchRecruitmentsUI* searchrecruitmentsUI;
public:
    SearchRecruitments();
    vector<tuple<string, int, string, int, string>> showRecruitment(string companyName);
    SearchRecruitmentsUI* getUI();
};


#endif //USERMANAGEMENT_SEARCHRECRUITMENTS_H
