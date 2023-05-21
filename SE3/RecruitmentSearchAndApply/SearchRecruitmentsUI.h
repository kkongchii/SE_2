#pragma once
#include <iostream>
#include <vector>
#include "Recruitments.h"
#include "SearchRecruitments.h"

class SearchRecruitments;

/*
Boundary class: 채용 정보 검색, 회사이름을 입력받고 해당하는 회사에 대한 채용 정보 리스트(회사이름, 사업자번호, 업무, 인원수, 신청 마감일 정보)를 출력한다
디폴트 정렬 기준은 회사 이름의 오름차순이다.
*/
class SearchRecruitmentsUI
{
private:
	char companyName[100];
	// SearchRecruitments* searchRecruitmentsptr;
public:
	SearchRecruitmentsUI();
	void searchRecruitments(FILE* in_fp, FILE* out_fp, SearchRecruitments*, vector<User*>);
	void startInterface(FILE* out_fp); // 4.1. 채용 정보 검색만 출력
	// Recruitment* inputCompanyName(vector<Recruitment*>); // 참고 1에 있던 거
};