
#ifndef USERMANAGEMENT_APPLYFORRECRUITMENT_H
#define USERMANAGEMENT_APPLYFORRECRUITMENT_H

#include<iostream>
#include"ApplyForRecruitmentUI.h"
#include "entity/Recruitment.h"

using namespace std;
class ApplyForRecruitmentUI;

class ApplyForRecruitment {
private:
	ApplyForRecruitmentUI* applyForRecruitmentUI;
public:
	ApplyForRecruitment();
	tuple <string, int, string> addNewJobApplication(int SSN); // ����ڹ�ȣ�� �˻�
	ApplyForRecruitmentUI* getUI();
};


#endif //USERMANAGEMENT_APPLYFORRECRUITMENT_H
