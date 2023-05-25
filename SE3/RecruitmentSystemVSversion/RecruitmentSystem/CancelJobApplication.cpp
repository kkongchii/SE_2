
#ifndef USERMANAGEMENT_CANCELJOBAPPLICATION_CPP
#define USERMANAGEMENT_CANCELJOBAPPLICATION_CPP

#include "CancelJobApplication.h"

/*
Function : CancelJobApplication::CancelJobApplication()
Description : CancelJobApplication Class ������, CancelJobApplicationUI�� �����Ͽ� �ش� ���۷����� ����
ReturnType : X
Parameter : X
Author : ���Ѿ�
Created : 2023/05/25
*/
CancelJobApplication::CancelJobApplication() {
    this->cancelJobApplicationUI = new CancelJobApplicationUI(this);
}

/*
Function : tuple<string, int, string> CancelJobApplication::dropJobApplication(int SSN)
Description : Ư�� ����� ��ȣ�� ���� ��� ����� �����ϴ� �Լ�, ��ҵ� ����(ä�� ����)�� ȸ���̸�, ����ڹ�ȣ, ������ ���� ��
ReturnType : tuple<string, int, string>
Parameter : int SSN
Author : ���Ѿ�
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
Description : CancelJobApplicationUI�� ���۷����� ��ȯ�ϴ� Getter
ReturnType : CancelJobApplicationUI*
Parameter : X
Author : ���Ѿ�
Created : 2023/05/25
*/
CancelJobApplicationUI* CancelJobApplication::getUI() {
    return this->cancelJobApplicationUI;
}

#endif //USERMANAGEMENT_CANCELJOBAPPLICATION_CPP
