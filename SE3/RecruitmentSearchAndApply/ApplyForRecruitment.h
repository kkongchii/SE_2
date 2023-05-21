#pragma once
#include "ApplyForRecruitmentUI.h"

class ApplyForRecruitment
{
private:
  
public:
    ApplyForRecruitment();
    ApplyForRecruitment(FILE* in_fp, FILE* out_fp, vector<User*>);
    void addNewJobApplication(String number, vector<User*>);
};
