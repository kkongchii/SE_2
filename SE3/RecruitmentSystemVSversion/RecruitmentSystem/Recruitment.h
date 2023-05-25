#ifndef USERMANAGEMENT_RECRUITMENT_H
#define USERMANAGEMENT_RECRUITMENT_H
#include <iostream>
#include <tuple>
#include <string>
#include <vector>
#include "CompanyUser.h"

using namespace std;

class CompanyUser;

/*
class : Recruitment
Description : 채용 정보를 위한 Entity 클래스
Author : 정한얼
Created : 2023/05/25
*/
class Recruitment {
private:
    string task;
    int limitApplicantNum;
    string deadline;
    int applicantNum;
    CompanyUser* companyUser;
public:
    Recruitment(string task, int limitApplicantNum, string deadline, CompanyUser* companyUser); 

    tuple<string, int, string, int, string, int> getRecruitmentDetails();
    string getDeadline();
    int getApplicantNum();
    void setApplicantNum(int num);
};


#endif //USERMANAGEMENT_RECRUITMENT_H
