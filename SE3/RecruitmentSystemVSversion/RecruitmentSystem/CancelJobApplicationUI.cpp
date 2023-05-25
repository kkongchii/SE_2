#ifndef USERMANAGEMENT_CANCELJOBAPPLICATIONUI_CPP
#define USERMANAGEMENT_CANCELJOBAPPLICATIONUI_CPP

#include "CancelJobApplicationUI.h"
#include <fstream>

/*
Function : CancelJobApplicationUI::CancelJobApplicationUI(CancelJobApplication* cancelJobApplication) 
Description : CancelJobApplicationUI Class 생성자, CancelJobApplication로 부터 레퍼런스를 전달받아 저장
ReturnType : X
Parameter : CancelJobApplication* cancelJobApplication
Author : 정한얼
Created : 2023/05/25
*/
CancelJobApplicationUI::CancelJobApplicationUI(CancelJobApplication* cancelJobApplication) {
    this->cancelJobApplicationControl = cancelJobApplication;
}

/*
Function : void CancelJobApplicationUI::startInterface() 
Description : 지원 취소 기능의 최초 인터페이스 출력용 함수, 해당 과제에서는 구현하지 않음
ReturnType : void
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
void CancelJobApplicationUI::startInterface() {
    // 지원 취소를 위해 본인의 지원정보 리스트를 보여주는 UI를 출력
    // 해당 과제에서는 미구현
}

/*
Function : void CancelJobApplicationUI::cancelJobApplication(ofstream& out_file, int SSN)
Description : 특정 사업자 번호로 지원 취소 기능에 대한 결과를 출력하는 함수
ReturnType : void
Parameter : ofstream& out_file, int SSN 
Author : 정한얼
Created : 2023/05/25
*/
void CancelJobApplicationUI::cancelJobApplication(ofstream& out_file, int SSN) {
    tuple<string, int, string> canceledJobApplication = this->cancelJobApplicationControl->dropJobApplication(SSN);
    if (get<1>(canceledJobApplication) == -1) {
        out_file << "> No JobApplication";
        return;
    }
    out_file << "> " << get<0>(canceledJobApplication).c_str() << " " << get<1>(canceledJobApplication) << " " << get<2>(canceledJobApplication).c_str() << "\n";
}

/*
Function : CancelJobApplication* CancelJobApplicationUI::getControl()
Description : CancelJobApplication의 레퍼런스를 반환하는 Getter
ReturnType : CancelJobApplication*
Parameter : X
Author : 정한얼
Created : 2023/05/25
*/
CancelJobApplication* CancelJobApplicationUI::getControl() {
    return this->cancelJobApplicationControl;
}

#endif //USERMANAGEMENT_CANCELJOBAPPLICATIONUI_CPP
