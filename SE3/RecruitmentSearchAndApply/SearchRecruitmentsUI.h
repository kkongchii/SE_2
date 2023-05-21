#pragma once
#include <iostream>
#include <vector>
#include "Recruitments.h"
#include "SearchRecruitments.h"

class SearchRecruitments;

/*
Boundary class: ä�� ���� �˻�, ȸ���̸��� �Է¹ް� �ش��ϴ� ȸ�翡 ���� ä�� ���� ����Ʈ(ȸ���̸�, ����ڹ�ȣ, ����, �ο���, ��û ������ ����)�� ����Ѵ�
����Ʈ ���� ������ ȸ�� �̸��� ���������̴�.
*/
class SearchRecruitmentsUI
{
private:
	char companyName[100];
	// SearchRecruitments* searchRecruitmentsptr;
public:
	SearchRecruitmentsUI();
	void searchRecruitments(FILE* in_fp, FILE* out_fp, SearchRecruitments*, vector<User*>);
	void startInterface(FILE* out_fp); // 4.1. ä�� ���� �˻��� ���
	// Recruitment* inputCompanyName(vector<Recruitment*>); // ���� 1�� �ִ� ��
};