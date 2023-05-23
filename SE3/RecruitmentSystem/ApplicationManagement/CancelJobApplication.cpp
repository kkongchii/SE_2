
#ifndef USERMANAGEMENT_CANCELJOBAPPLICATION_CPP
#define USERMANAGEMENT_CANCELJOBAPPLICATION_CPP

#include "CancelJobApplication.h"

bool isRecruitmentOpen(string deadline) {
    time_t timer = time(nullptr);
    tm* now = localtime(&timer);

    string currentDate = to_string(now->tm_year) + "/";
    if(now->tm_mon > 9) {
        currentDate = currentDate + to_string(now->tm_mon);
    } else {
        currentDate = currentDate + "0" + to_string(now->tm_mon);
    }

    currentDate = currentDate + "/";

    if(now->tm_mday > 9) {
        currentDate = currentDate + to_string(now->tm_mday);
    } else {
        currentDate = currentDate + "0" + to_string(now->tm_mday);
    }

    return currentDate >= deadline;
}

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
    Recruitment* validRecruitment = nullptr;
    for(auto it = recruitmentList.begin(); it != recruitmentList.end(); it++) {
        if(isRecruitmentOpen(get<4>((*it)->getRecruitmentDetails()))) {
            validRecruitment = (*it);
            break;
        }
    }

    ((GeneralUser*) currentLoginUser)->getOwnJobApplicationList()->deleteJobApplication(validRecruitment);

    tuple<string, int, string, int, string> canceledRecuitment = validRecruitment->getRecruitmentDetails();

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
