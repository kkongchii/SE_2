#include "ApplyForRecruitmentUI.h"

ApplyForRecruitmentUI::ApplyForRecruitmentUI()
{
}

void ApplyForRecruitmentUI::applyForRecruitment(FILE* in_fp, FILE* out_fp, ApplyForRecruitment* applyForRecruitmentptr, vector<User*> userList) // 그냥 UserList class를 넣어야 하나?
{
	int temp = fscanf(in_fp, "%s", number); // 입력된 사업자번호 가져옴

	Recruitment* recruitmentPointer = nullptr;

	recruitmentPointer = applyForRecruitmentptr->addNewJobApplication(number, userList); // 사업자번호 같은 정보

	//출력
	fprintf(out_fp, "> %s %s %s\n", recruitmentPointer->getCompanyName(), recruitmentPointer->getCompanyNumber(), recruitmentPointer->getTask());
	fprintf(out_fp, "\n");
}

// interface 4.2. 채용 지원만 출력
void ApplyForRecruitmentUI::startInterface(FILE* out_fp)
{
	fprintf(out_fp, "4.2 채용 지원\n");
}