
#ifndef USERMANAGEMENT_APPLYFORRECRUITMENTUI_H
#define USERMANAGEMENT_APPLYFORRECRUITMENTUI_H

#include <iostream>
#include <string>
#include "ApplyForRecruitment.h"

using namespace std;
class ApplyForRecruitment;

class ApplyForRecruitmentUI {
private:
	ApplyForRecruitment* applyForRecruitmentControl;
public:
	ApplyForRecruitmentUI(ApplyForRecruitment* applyForRecruitmentControl);
	void startInterface(); // interface 출력
	void applyForRecruitment(FILE* fp, int SSN); // 사업자번호로 검색
	ApplyForRecruitment* getControl();
};
#endif //USERMANAGEMENT_APPLYFORRECRUITMENTUI_H