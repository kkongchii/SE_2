
#ifndef USERMANAGEMENT_APPLYFORRECRUITMENT_CPP
#define USERMANAGEMENT_APPLYFORRECRUITMENT_CPP

#include "ApplyForRecruitment.h"
#include "UserList.h"
#include "RecruitmentList.h"
#include "JobApplicationList.h"

/*
Function : ApplyForRecruitment::ApplyForRecruitment()
Description: UI 클래스와 레퍼런스를 교환하는 함수
*/
ApplyForRecruitment::ApplyForRecruitment() {
    this->applyForRecruitmentUI = new ApplyForRecruitmentUI(this);
}

/*
Function : tuple < string, int, string> ApplyForRecruitment::addNewJobApplication(int SSN)
Description: 입력한 사업자 번호에 해당하는 채용 정보를 불러온 뒤, 활성화 되어 있는 채용 정보에 지원한다.
*/
tuple < string, int, string> ApplyForRecruitment::addNewJobApplication(int SSN) {
    extern UserList userDB;
    extern User* currentLoginUser; 

    CompanyUser* searchedCUser = (CompanyUser*)userDB.getSpecificUserBySSN(SSN); 
    vector<Recruitment*> searchedRList = searchedCUser->getOwnRecruitmentList()->getRecruitmentList(); 


    Recruitment* addRecruitment = searchedRList[0]; 

    ((GeneralUser*)currentLoginUser)->getOwnJobApplicationList()->addJobApplication(addRecruitment);

    tuple <string, int, string, int, string, int> apply = addRecruitment->getRecruitmentDetails();

    
    return {
        get<0>(apply),
        get<1>(apply),
        get<2>(apply)
    };
}

/*
Function : ApplyForRecruitmentUI* ApplyForRecruitment::getUI()
Description: 자신이 갖고 있는 UI 클래스 레퍼런스를 반환한다.
*/
ApplyForRecruitmentUI* ApplyForRecruitment::getUI() {
    return this->applyForRecruitmentUI;
}


#endif //USERMANAGEMENT_APPLYFORRECRUITMENT_CPP
