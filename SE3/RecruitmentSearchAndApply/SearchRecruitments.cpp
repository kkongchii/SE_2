#include "SearchRecruitments.h"

SearchRecruitments::SearchRecruitments()
{
}

// main에서 시작은 control class 생성부터 -> UI를 불러야한다.
SearchRecruitments::SearchRecruitments(FILE* in_fp, FILE* out_fp, vector<User*> userList)
{
	SearchRecruitmentsUI search;
	search.startInterface(out_fp); // 1. interface
	search.searchRecruitments(in_fp, out_fp, this, userList); // 2. searchRecruitments() // SearchRecruitments 지금 생성한 거 this // ppt 17p 참고
}

Recruitment* SearchRecruitments::showRecruitments(string companyName, vector<User*> userList) // 입력한 회사이름과 같은 유저 정보 찾기 // 그 유저의 채용 정보 리스트를 반환
{
	Recruitment* selectedRecruitment = nullptr;

	for (auto& itr : userList) // 근데 이럴 경우 일반 유저와 회사 유저의 이름이 같을 경우 문제가 생긴다 회사 유저 리스트만 가져올 수 있나?
	{
		if (companyName == itr->getName()) // 이름 같을 경우
		{
			selectedRecruitment = itr->getRecruitment(); // 해당 유저의 채용 정보 리스트 // 였으나 하나만 등록한다고 해서 리스트가 필요없어졌다.
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