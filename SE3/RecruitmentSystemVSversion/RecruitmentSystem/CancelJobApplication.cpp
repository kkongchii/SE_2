
#ifndef USERMANAGEMENT_CANCELJOBAPPLICATION_CPP
#define USERMANAGEMENT_CANCELJOBAPPLICATION_CPP

#include "CancelJobApplication.h"

/*
Function : CancelJobApplication::CancelJobApplication()
Description : CancelJobApplication Class 생성자, CancelJobApplicationUI를 생성하여 해당 레퍼런스를 저장
ReturnType : X
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
CancelJobApplication::CancelJobApplication() {
    this->cancelJobApplicationUI = new CancelJobApplicationUI(this);
}

/*
Function : tuple<string, int, string> CancelJobApplication::dropJobApplication(int SSN)
Description : 특정 사업자 번호로 지원 취소 기능을 수행하는 함수, 취소된 지원(채용 정보)의 회사이름, 사업자번호, 업무를 리턴 함
ReturnType : tuple<string, int, string>
Parameter : int SSN
Author : 정한얼
Created : 2023/05/25
*/
tuple<string, int, string> CancelJobApplication::dropJobApplication(int SSN) {
    extern UserList userDB; 
    extern User* currentLoginUser;

    vector<Recruitment*> recruitmentList = userDB.getSpecificUserBySSN(SSN)->getOwnRecruitmentList()->getRecruitmentList();
    Recruitment* validRecruitment = recruitmentList[0];
    validRecruitment->setApplicantNum(validRecruitment->getApplicantNum() - 1);

    int result = ((GeneralUser*)currentLoginUser)->getOwnJobApplicationList()->deleteJobApplication(validRecruitment);
    if (result == -1) {
        tuple<string, int, string> fail = make_tuple("", -1, "");
        return fail;
    }

    tuple<string, int, string, int, string, int> canceledRecuitment = validRecruitment->getRecruitmentDetails();

    return {
            get<0>(canceledRecuitment),
            get<1>(canceledRecuitment),
            get<2>(canceledRecuitment)
    };
}

/*
Function : CancelJobApplicationUI* CancelJobApplication::getUI()
Description : CancelJobApplicationUI의 레퍼런스를 반환하는 Getter
ReturnType : CancelJobApplicationUI*
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
CancelJobApplicationUI* CancelJobApplication::getUI() {
    return this->cancelJobApplicationUI;
}

#endif //USERMANAGEMENT_CANCELJOBAPPLICATION_CPP
