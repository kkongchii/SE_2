#include "SearchRecruitments.h"

SearchRecruitments::SearchRecruitments()
{
}

// main���� ������ control class �������� -> UI�� �ҷ����Ѵ�.
SearchRecruitments::SearchRecruitments(FILE* in_fp, FILE* out_fp, vector<User*> userList)
{
	SearchRecruitmentsUI search;
	search.startInterface(out_fp); // 1. interface
	search.searchRecruitments(in_fp, out_fp, this, userList); // 2. searchRecruitments() // SearchRecruitments ���� ������ �� this // ppt 17p ����
}

Recruitment* SearchRecruitments::showRecruitments(string companyName, vector<User*> userList) // �Է��� ȸ���̸��� ���� ���� ���� ã�� // �� ������ ä�� ���� ����Ʈ�� ��ȯ
{
	Recruitment* selectedRecruitment = nullptr;

	for (auto& itr : userList) // �ٵ� �̷� ��� �Ϲ� ������ ȸ�� ������ �̸��� ���� ��� ������ ����� ȸ�� ���� ����Ʈ�� ������ �� �ֳ�?
	{
		if (companyName == itr->getName()) // �̸� ���� ���
		{
			selectedRecruitment = itr->getRecruitment(); // �ش� ������ ä�� ���� ����Ʈ // ������ �ϳ��� ����Ѵٰ� �ؼ� ����Ʈ�� �ʿ��������.
			return selectedRecruitment;
		}
	}


	return selectedRecruitment;

}




/*Recruitment* SearchRecruitments::startInterface(FILE* in_fp, FILE* out_fp, vector<Recruitment*> recruitmentsList)
{
	SearchRecruitmentsUI searchRecruitmentsUI;
	Recruitments* Recruitmentsptr = searchRecruitmentsUI.startInterface(in_fp, out_fp, this, recruitmentsList);

	return Recruitmentsptr;
}
*/