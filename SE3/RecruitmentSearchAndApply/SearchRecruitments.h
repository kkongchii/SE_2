#pragma once
#include "SearchRecruitmentsUI.h"

class SearchRecruitmentsUI;

/*
ä�� ���� �˻� ����
*/
class SearchRecruitments
{
private:
	Recruitment selectedrecruitments;
public:
	SearchRecruitments();
	SearchRecruitments(FILE* in_fp, FILE* out_fp, vector<User*>);
	// Recruitment* startInterface(FILE* in_fp, FILE* out_fp, vector<Recruitment*>); // ���� 1�� �ִ� ��
	Recruitment* showRecruitments(string CompanyName, vector<User*>); // collection ����� �� ���Ƽ� RecruitmentList�� ��ȯ�ϰ� �� // �׷��� �߾��µ� qna���� �ϳ��� ����Ѵٰ� ��
};
