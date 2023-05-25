
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
	void startInterface(); 
	void applyForRecruitment(ofstream& out_file, int SSN); 
	ApplyForRecruitment* getControl();
};


#endif //USERMANAGEMENT_APPLYFORRECRUITMENTUI_H
