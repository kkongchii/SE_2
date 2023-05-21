#pragma once
#include <iostream>
#include <vector>
#include "Recruitments.h"
#include "ApplyforRecruitment.h"

class ApplyForRecruitment;

/*
채용 지원 UI
*/
class ApplyForRecruitmentUI
{
private:
    char number[100]; // 사업자 번호 받아올 거
public:
    ApplyForRecruitmentUI();
    void startInterface(FILE* out_fp);
    void applyForRecruitment(FILE* in_fp, FILE* out_fp, ApplyForRecruitment* applyForRecruitmentptr, vector<User*> userList);
};