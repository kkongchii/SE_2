
#ifndef USERMANAGEMENT_SEARCHRECRUITMENTS_H
#define USERMANAGEMENT_SEARCHRECRUITMENTS_H


#include <iostream>
#include <string>
#include "SearchRecruitmentsUI.h"
#include "Recruitment.h"

using namespace std;
class SearchRecruitmentsUI;

class SearchRecruitments {
private:
    SearchRecruitmentsUI* searchRecruitmentsUI;
public:
    SearchRecruitments();
    vector<tuple<string, int, string, int, string, int>> showRecruitment(string companyName);
    SearchRecruitmentsUI* getUI();
};


#endif //USERMANAGEMENT_SEARCHRECRUITMENTS_H
