
#ifndef USERMANAGEMENT_APPLYFORRECRUITMENT_H
#define USERMANAGEMENT_APPLYFORRECRUITMENT_H

#include<iostream>
#include"ApplyForRecruitmentUI.h"
#include "Recruitment.h"

using namespace std;
class ApplyForRecruitmentUI;

/*
Class : ApplyForRecruitment
Description: 채용 지원을 처리하는 Control 클래스
Author: 이정원
Created: 2023/05/25
*/
class ApplyForRecruitment {
private:
	ApplyForRecruitmentUI* applyForRecruitmentUI;
public:
	ApplyForRecruitment();
	tuple <string, int, string> addNewJobApplication(int SSN); 
	ApplyForRecruitmentUI* getUI();
};


#endif //USERMANAGEMENT_APPLYFORRECRUITMENT_H
