#include "ApplyForRecruitment.h"
#include "JobApplicationList.h"

ApplyForRecruitment::ApplyForRecruitment()
{
}

// main에서 시작은 control class 생성부터 -> UI를 불러야한다.
ApplyForRecruitment::ApplyForRecruitment(FILE* in_fp, FILE* out_fp, userList)
{
	ApplyForRecruitmentUI apply;
	apply.startInterface(out_fp); // 1. interface
	apply.applyForRecruitment(in_fp, out_fp, this, userList); // 2. ApplyforRecruitment() // ApplyforRecruitment 지금 생성한 거 this // ppt 17p 참고
}

Recruitment* ApplyForRecruitment::addNewJobApplication(string number, vector<User*> userList) // 입력한 회사이름과 같은 유저 정보 찾기 // 그 유저의 채용 정보 리스트를 반환
{
	Recruitment* selectedRecruitment = nullptr;

	for (auto& itr : userList) // 근데 이럴 경우 일반 유저와 회사 유저의 번호가 같을 경우 문제가 생긴다 회사 유저 리스트만 가져올 수 있나?
	{
		if (number == itr->getCompanyRegistrationNumber()) // 사업자번호 같을 경우
		{
			selectedRecruitment = itr->getRecruitment(); // 해당 유저의 채용 정보 리스트 // 였으나 하나만 등록한다고 해서 리스트가 필요없어졌다.

			// 위에까지가 찾기 이제 등록
			JobApplicationList* newapplication:
			newapplication = selectedRecruitment->getJobApplicationsList(); // 채용 정보의 지원정보 리스트를 가져오는 함수 못 본 것 같음
			newapplication -> addNewJobApplications(); // 리스트에 추가

			return selectedRecruitment; // 출력 위해서 반환
		}
	}

	return selectedRecruitment;

}