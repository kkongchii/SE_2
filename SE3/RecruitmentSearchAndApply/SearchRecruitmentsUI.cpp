#include "SearchRecruitmentsUI.h"

SearchRecruitmentsUI::SearchRecruitmentsUI()
{
}

void SearchRecruitmentsUI::searchRecruitments(FILE* in_fp, FILE* out_fp, SearchRecruitments* searchRecruitmentsptr, vector<User*> userList) // �׳� UserList class�� �־�� �ϳ�?
{
	int temp = fscanf(in_fp, "%s", companyName); // �Էµ� ȸ�� �̸� ������

	Recruitment* recruitmentPointer = nullptr;

	recruitmentPointer = searchRecruitmentsptr->showRecruitments(companyName, userList); // �̸� ���� ȸ���� ä�� ���� ������ // 2.1

	//���
	fprintf(out_fp, "> %s %s %s %s %s\n", recruitmentPointer->getCompanyName(), recruitmentPointer->getCompanyNumber(), recruitmentPointer->getTask(), recruitmentPointer->getPersonNumber(), recruitmentPointer->getEndDate());
	fprintf(out_fp, "\n");


	/*
	qna ���� �� list�� ������ ����
	RecruitmentList* recruitmentsPointer = nullptr;

	recruitmentsPointer = searchRecruitmentsptr->showRecruitments(companyName, userList); // 2.1. ����Ʈ�� �̸� �񱳸� �ؼ� �´� �� ã�Ƽ� ������

	Recruitments* recruitment = recruitmentsPointer->findFirst(); // ����Ʈ�� ó��
	
	while (recruitment != nullptr) {
		fprintf(out_fp, "%s %s %s %s %s\n", recruitment->getCompanyName(), recruitment->getCompanyNumber(), recruitment->getTask(), recruitment->getPersonNumber(), recruitment->getEndDate());
		recruitment = recruitmentsPointer->getNext(); // ���� ����Ʈ��
	} // ����Ʈ ���� ������ ���  // ȸ���̸��� �������� ����̶�µ� ȸ���̸����� �˻��ϸ� ȸ�� 1���� ������ �� �ƴѰ�?

	fprintf(out_fp, "\n"); // ��
	*/ 
}

// interface 4.1. ä�� ���� �˻��� ���
void SearchRecruitmentsUI::startInterface(FILE* out_fp)
{
	fprintf(out_fp, "4.1. ä�� ���� �˻�\n");
}






// ���� �ڷ� 1 ����

/*SearchRecruitmentsUI::SearchRecruitmentsUI(FILE* in_fp, FILE* out_fp, SearchRecruitments* searchRecruitmentsptr, vector<User*> userList)
{
	int temp = fscanf(in_fp, "%s", companyName); // �Էµ� ȸ�� �̸� ������

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