#pragma once
#include "SearchRecruitmentsUI.h"

class SearchRecruitmentsUI;

/*
채용 정보 검색 수행
*/
class SearchRecruitments
{
private:
	Recruitment selectedrecruitments;
public:
	SearchRecruitments();
	SearchRecruitments(FILE* in_fp, FILE* out_fp, vector<User*>);
	// Recruitment* startInterface(FILE* in_fp, FILE* out_fp, vector<Recruitment*>); // 참고 1에 있던 것
	Recruitment* showRecruitments(string CompanyName, vector<User*>); // collection 써야할 것 같아서 RecruitmentList로 반환하게 함 // 그렇게 했었는데 qna에서 하나만 등록한다고 함
};
