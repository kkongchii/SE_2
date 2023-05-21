#include "ApplyForRecruitment.h"
#include "JobApplicationList.h"

ApplyForRecruitment::ApplyForRecruitment()
{
}

// main���� ������ control class �������� -> UI�� �ҷ����Ѵ�.
ApplyForRecruitment::ApplyForRecruitment(FILE* in_fp, FILE* out_fp, userList)
{
	ApplyForRecruitmentUI apply;
	apply.startInterface(out_fp); // 1. interface
	apply.applyForRecruitment(in_fp, out_fp, this, userList); // 2. ApplyforRecruitment() // ApplyforRecruitment ���� ������ �� this // ppt 17p ����
}

Recruitment* ApplyForRecruitment::addNewJobApplication(string number, vector<User*> userList) // �Է��� ȸ���̸��� ���� ���� ���� ã�� // �� ������ ä�� ���� ����Ʈ�� ��ȯ
{
	Recruitment* selectedRecruitment = nullptr;

	for (auto& itr : userList) // �ٵ� �̷� ��� �Ϲ� ������ ȸ�� ������ ��ȣ�� ���� ��� ������ ����� ȸ�� ���� ����Ʈ�� ������ �� �ֳ�?
	{
		if (number == itr->getCompanyRegistrationNumber()) // ����ڹ�ȣ ���� ���
		{
			selectedRecruitment = itr->getRecruitment(); // �ش� ������ ä�� ���� ����Ʈ // ������ �ϳ��� ����Ѵٰ� �ؼ� ����Ʈ�� �ʿ��������.

			// ���������� ã�� ���� ���
			JobApplicationList* newapplication:
			newapplication = selectedRecruitment->getJobApplicationsList(); // ä�� ������ �������� ����Ʈ�� �������� �Լ� �� �� �� ����
			newapplication -> addNewJobApplications(); // ����Ʈ�� �߰�

			return selectedRecruitment; // ��� ���ؼ� ��ȯ
		}
	}

	return selectedRecruitment;

}