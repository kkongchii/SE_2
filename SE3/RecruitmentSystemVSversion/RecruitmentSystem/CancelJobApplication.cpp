
#ifndef USERMANAGEMENT_CANCELJOBAPPLICATION_CPP
#define USERMANAGEMENT_CANCELJOBAPPLICATION_CPP

#include "CancelJobApplication.h"

CancelJobApplication::CancelJobApplication() {
    this->cancelJobApplicationUI = new CancelJobApplicationUI(this);
}

// [0] string CompanyName,
// [1] int SSN,
// [2] string task
tuple<string, int, string> CancelJobApplication::dropJobApplication(int SSN) {
    extern UserList userDB; // main 함수의 userDB 사용
    extern User* currentLoginUser; // main 함수의 currentLoginUser를 사용

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

CancelJobApplicationUI* CancelJobApplication::getUI() {
    return this->cancelJobApplicationUI;
}

#endif //USERMANAGEMENT_CANCELJOBAPPLICATION_CPP
