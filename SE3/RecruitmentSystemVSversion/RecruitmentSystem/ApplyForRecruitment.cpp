
#ifndef USERMANAGEMENT_APPLYFORRECRUITMENT_CPP
#define USERMANAGEMENT_APPLYFORRECRUITMENT_CPP

#include "ApplyForRecruitment.h"
#include "UserList.h"
#include "RecruitmentList.h"
#include "JobApplicationList.h"

/*
Function : ApplyForRecruitment::ApplyForRecruitment()
Description: UI Ŭ������ ���۷����� ��ȯ�ϴ� ������
ReturnType: X
Parameter: X
Author: ������
Created: 2023/05/25
*/
ApplyForRecruitment::ApplyForRecruitment() {
    this->applyForRecruitmentUI = new ApplyForRecruitmentUI(this);
}

/*
Function : tuple < string, int, string> ApplyForRecruitment::addNewJobApplication(int SSN)
Description: UI Ŭ�������� ���� ����� ��ȣ�� ä�� ������ �˻��� �� �ش�Ǵ� ä�� ������ ������ ����� UIŬ������ ��ȯ�Ѵ�.
ReturnType: tuple < string, int, string>
Parameter: int SSN
Author: ������
Created: 2023/05/25
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
Description: �ڽ��� ���� �ִ� UI Ŭ���� ���۷����� ��ȯ�Ѵ�.
ReturnType: ApplyForRecruitmentUI*
Parameter: X
Author: ������
Created: 2023/05/25
*/
ApplyForRecruitmentUI* ApplyForRecruitment::getUI() {
    return this->applyForRecruitmentUI;
}


#endif //USERMANAGEMENT_APPLYFORRECRUITMENT_CPP
