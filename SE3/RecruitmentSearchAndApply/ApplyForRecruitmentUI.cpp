#include "ApplyForRecruitmentUI.h"

ApplyForRecruitmentUI::ApplyForRecruitmentUI()
{
}

void ApplyForRecruitmentUI::applyForRecruitment(FILE* in_fp, FILE* out_fp, ApplyForRecruitment* applyForRecruitmentptr, vector<User*> userList) // �׳� UserList class�� �־�� �ϳ�?
{
	int temp = fscanf(in_fp, "%s", number); // �Էµ� ����ڹ�ȣ ������

	Recruitment* recruitmentPointer = nullptr;

	recruitmentPointer = applyForRecruitmentptr->addNewJobApplication(number, userList); // ����ڹ�ȣ ���� ����

	//���
	fprintf(out_fp, "> %s %s %s\n", recruitmentPointer->getCompanyName(), recruitmentPointer->getCompanyNumber(), recruitmentPointer->getTask());
	fprintf(out_fp, "\n");
}

// interface 4.2. ä�� ������ ���
void ApplyForRecruitmentUI::startInterface(FILE* out_fp)
{
	fprintf(out_fp, "4.2 ä�� ����\n");
}