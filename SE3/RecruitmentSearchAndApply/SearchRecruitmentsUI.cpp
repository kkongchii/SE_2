#include "SearchRecruitmentsUI.h"

SearchRecruitmentsUI::SearchRecruitmentsUI()
{
}

void SearchRecruitmentsUI::searchRecruitments(FILE* in_fp, FILE* out_fp, SearchRecruitments* searchRecruitmentsptr, vector<User*> userList) // 그냥 UserList class를 넣어야 하나?
{
	int temp = fscanf(in_fp, "%s", companyName); // 입력된 회사 이름 가져옴

	Recruitment* recruitmentPointer = nullptr;

	recruitmentPointer = searchRecruitmentsptr->showRecruitments(companyName, userList); // 이름 같은 회사의 채용 정보 가져옴 // 2.1

	//출력
	fprintf(out_fp, "> %s %s %s %s %s\n", recruitmentPointer->getCompanyName(), recruitmentPointer->getCompanyNumber(), recruitmentPointer->getTask(), recruitmentPointer->getPersonNumber(), recruitmentPointer->getEndDate());
	fprintf(out_fp, "\n");


	/*
	qna 보기 전 list로 구현한 버전
	RecruitmentList* recruitmentsPointer = nullptr;

	recruitmentsPointer = searchRecruitmentsptr->showRecruitments(companyName, userList); // 2.1. 리스트와 이름 비교를 해서 맞는 것 찾아서 가져옴

	Recruitments* recruitment = recruitmentsPointer->findFirst(); // 리스트의 처음
	
	while (recruitment != nullptr) {
		fprintf(out_fp, "%s %s %s %s %s\n", recruitment->getCompanyName(), recruitment->getCompanyNumber(), recruitment->getTask(), recruitment->getPersonNumber(), recruitment->getEndDate());
		recruitment = recruitmentsPointer->getNext(); // 다음 리스트로
	} // 리스트 끝날 때까지 출력  // 회사이름의 오름차순 출력이라는데 회사이름으로 검색하면 회사 1개만 나오는 거 아닌가?

	fprintf(out_fp, "\n"); // 끝
	*/ 
}

// interface 4.1. 채용 정보 검색만 출력
void SearchRecruitmentsUI::startInterface(FILE* out_fp)
{
	fprintf(out_fp, "4.1. 채용 정보 검색\n");
}






// 참고 자료 1 버전

/*SearchRecruitmentsUI::SearchRecruitmentsUI(FILE* in_fp, FILE* out_fp, SearchRecruitments* searchRecruitmentsptr, vector<User*> userList)
{
	int temp = fscanf(in_fp, "%s", companyName); // 입력된 회사 이름 가져옴

	this->searchRecruitmentsptr = searchRecruitmentsptr;

	Recruitment* recruitmentsPointer = nullptr;

	recruitmentsPointer = this->inputCompanyName(recruitmentsList);

	fprintf(out_fp, "%s %s %s %s %s\n", recruitmentsPointer->getCompanyName(), recruitmentsPointer->getCompanyNumber(), recruitmentsPointer->getTask(), recruitmentsPointer->getPersonNumber(), recruitmentsPointer->getEndDate());
	fprintf(out_fp, "\n");

	return recruitmentsPointer;
}*/


/*Recruitment* SearchRecruitmentsUI::inputCompanyName(vector<Recruitment*> recruitmentsList)
{
	Recruitment* recruitmentsPointer = nullptr;

	recruitmentsPointer = this->searchRecruitmentsptr->showRecruitmentsDetails(companyName, recruitmentsList);

	return recruitmentsPointer;
}
*/