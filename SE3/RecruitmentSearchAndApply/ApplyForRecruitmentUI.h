#pragma once
#include <iostream>
#include <vector>
#include "Recruitments.h"
#include "ApplyforRecruitment.h"

class ApplyForRecruitment;

/*
ä�� ���� UI
*/
class ApplyForRecruitmentUI
{
private:
    char number[100]; // ����� ��ȣ �޾ƿ� ��
public:
    ApplyForRecruitmentUI();
    void startInterface(FILE* out_fp);
    void applyForRecruitment(FILE* in_fp, FILE* out_fp, ApplyForRecruitment* applyForRecruitmentptr, vector<User*> userList);
};