
#ifndef USERMANAGEMENT_APPLYFORRECRUITMENT_CPP
#define USERMANAGEMENT_APPLYFORRECRUITMENT_CPP

#include "ApplyForRecruitment.h"
#include "UserList.h"
#include "RecruitmentList.h"
#include "JobApplicationList.h"

ApplyForRecruitment::ApplyForRecruitment() {
    this->applyForRecruitmentUI = new ApplyForRecruitmentUI(this);
    // 레퍼런스 교환
}

tuple < string, int, string> ApplyForRecruitment::addNewJobApplication(int SSN) {
    extern UserList userDB; // main 함수에 선언 된 userDB 사용
    extern User* currentLoginUser; // main 함수의 currentLoginUser를 사용

    CompanyUser* searchedCUser = (CompanyUser*)userDB.getSpecificUserBySSN(SSN); // 2.1.1 사업자번호 같은 회사회원 가져옴
    vector<Recruitment*> searchedRList = searchedCUser->getOwnRecruitmentList()->getRecruitmentList(); // 2.1.2 그 회사회원의 채용정보 리스트 가져옴

    // 선택 아니라 즉시 지원이므로 사실상 하나만 출력되어 나온다고 보면 될 것 같다
    // 그래서 여기에서는 for문 안 씀
    Recruitment* addRecruitment = searchedRList[0]; // 하나만 있을 것이라고 가정해서
    // 업무별 지원자수 출력을 위해 채용 정보에 지원자수 요소를 추가할 함수 필요

    ((GeneralUser*)currentLoginUser)->getOwnJobApplicationList()->addJobApplication(addRecruitment); // 지원자의 지원 정보 리스트에 추가

    tuple <string, int, string, int, string, int> apply = addRecruitment->getRecruitmentDetails();

    // 출력하는 값은 이 3개뿐
    return {
        get<0>(apply),
        get<1>(apply),
        get<2>(apply)
    };
}
ApplyForRecruitmentUI* ApplyForRecruitment::getUI() {
    return this->applyForRecruitmentUI;
}


#endif //USERMANAGEMENT_APPLYFORRECRUITMENT_CPP
