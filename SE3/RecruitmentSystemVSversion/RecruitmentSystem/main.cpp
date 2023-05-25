#ifndef USERMANAGEMENT_MAIN_CPP
#define USERMANAGEMENT_MAIN_CPP

#include <iostream>
#include <fstream>
#include <string>
#include "LogIn.h"
#include "LogOut.h"
#include "SignUp.h"
#include "Withdrawal.h"
#include "SearchRecruitments.h"
#include "ApplyForRecruitment.h"
#include "InquireCompanyRecruitments.h"
#include "RegisterRecruitment.h"
#include "ViewJobApplications.h"
#include "ViewJobApplicationStatistics.h"
#include "ViewRecruitmentStatistics.h"
#include "CancelJobApplication.h"
#include "UserList.h"

using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "../input.txt"
#define OUTPUT_FILE_NAME "../output.txt"

// 함수 선언
void doTask();

void program_exit();

// 변수 선언
ifstream in_file;
ofstream out_file;
User* currentLoginUser;
int isLogin = 0;
UserList userDB;

int main() {
    in_file.open(INPUT_FILE_NAME);
    out_file.open(OUTPUT_FILE_NAME);

    if (!in_file.is_open()) {
        cerr << "Failed to open input file." << endl;
        return 1;
    }

    if (!out_file.is_open()) {
        cerr << "Failed to open output file." << endl;
        return 1;
    }

    doTask();

    in_file.close();
    out_file.close();

    return 0;
}

void doTask() {
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit) {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        in_file >> menu_level_1 >> menu_level_2;

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1) {
        case 1: {
            switch (menu_level_2) {
            case 1: // "1.1. 회원가입“ 메뉴 부분
            {
                out_file << "1.1. 회원가입\n";
                SignUp controlSignUp = SignUp();
                controlSignUp.getUI()->startInterface();
                int signupType, number;
                string name, id, pw;
                in_file >> signupType;
                if (signupType == 1) { // 회사 회원 가입이라면
                    in_file >> name >> number >> id >> pw;
                    controlSignUp.getUI()->signupCompanyUser(out_file, name, number, id, pw);
                }
                else if (signupType == 2) { // 일반 회원 가입이라면
                    in_file >> name >> number >> id >> pw;
                    controlSignUp.getUI()->signupGeneralUser(out_file, name, number, id, pw);
                }

                break;
            }
            case 2: {
                //1.2. 회원탈퇴
                out_file << "1.2. 회원 탈퇴\n";
                Withdrawal controlWithdrawal = Withdrawal();
                if (isLogin == 0) {
                    out_file << "> Please log in first.\n";
                    continue;
                }
                controlWithdrawal.getUI()->startInterface();
                controlWithdrawal.getUI()->withdrawalUser(out_file, currentLoginUser->getId());

                break;
            }
            }
            break;
        }
        case 2: {
            switch (menu_level_2) {
            case 1: {
                // 2.1. 로그인
                out_file << "2.1. 로그인\n";
                string id, pw;
                in_file >> id >> pw;
                if (isLogin != 0) {
                    out_file << "> Please Logout First\n";
                    continue;
                }
                LogIn controlLogin = LogIn();
                controlLogin.getUI()->startInterface();
                controlLogin.getUI()->login(out_file, id, pw);
                if (currentLoginUser == nullptr) {
                    out_file << "> Login Fail\n";
                }
                break;
            }
            case 2: {
                // 2.2 로그아웃
                out_file << "2.2. 로그아웃\n";
                if (isLogin) {
                    LogOut controlLogout = LogOut();
                    controlLogout.getUI()->logout(out_file);
                }
                else {
                    out_file << "> You are not logged in.\n";
                }
                break;
            }
            }
            break;
        }
        case 3: {
            switch (menu_level_2) {
            case 1: {
                // 3.1 채용 정보 등록
                out_file << "3.1. 채용 정보 등록\n";
                RegisterRecruitment registerRecruitment = RegisterRecruitment();
                registerRecruitment.getUI()->startInterface();
                string task, deadLine;
                int limitApplicantNum;
                in_file >> task >> limitApplicantNum >> deadLine;
                registerRecruitment.getUI()->registerNewRecruitments(out_file, task, limitApplicantNum, deadLine);
                break;
            }
            case 2: {
                // 3.2 등록된 채용 정보 조회
                out_file << "3.2. 등록된 채용 정보 조회\n";
                InquireCompanyRecruitments inquireCompanyRecruitments = InquireCompanyRecruitments();
                inquireCompanyRecruitments.getUI()->inquireRecruitments(out_file);
                break;
            }
            }
            break;
        }
        case 4: {
            switch (menu_level_2) {
            case 1: {
                // 4.1 채용 정보 검색
                out_file << "4.1. 채용 정보 검색\n";
                SearchRecruitments controlRSearch = SearchRecruitments();
                controlRSearch.getUI()->startInterface();
                string name;
                in_file >> name;
                controlRSearch.getUI()->searchRecruitments(out_file, name);

                break;
            }
            case 2: {
                // 4.2 채용 지원
                out_file << "4.2. 채용 지원\n";
                ApplyForRecruitment controlApply = ApplyForRecruitment();
                controlApply.getUI()->startInterface();
                int SSN;
                in_file >> SSN;
                controlApply.getUI()->applyForRecruitment(out_file, SSN);

                break;
            }
            case 3: {
                // 4.3 지원 정보 조회
                out_file << "4.3. 지원 정보 조회\n";
                if (isLogin == 0) break;
                ViewJobApplications viewJobApplications = ViewJobApplications();
                viewJobApplications.getUI()->showJobApplication(out_file);
                break;
            }
            case 4: {
                // 4.4 지원 취소
                out_file << "4.4. 지원 취소\n";
                if (isLogin == 0) break;
                CancelJobApplication cancelJobApplication = CancelJobApplication();
                cancelJobApplication.getUI()->startInterface();
                int SSN;
                in_file >> SSN;
                cancelJobApplication.getUI()->cancelJobApplication(out_file, SSN);
                break;
            }
            }
            break;
        }
        case 5: {
            switch (menu_level_2) {
            case 1: {
                // 5.1 지원 정보 통계
                out_file << "5.1. 지원 정보 통계\n";
                if (isLogin == 1) {
                    ViewRecruitmentStatistics viewRecruitmentStatistics = ViewRecruitmentStatistics();
                    viewRecruitmentStatistics.getUI()->showStatistics(out_file);
                }
                else if (isLogin == 2) {
                    ViewJobApplicationStatistics viewJobApplicationStatistics = ViewJobApplicationStatistics();
                    viewJobApplicationStatistics.getUI()->showStatistics(out_file);
                }
                break;
            }
            }
            break;
        }
        case 6: {
            switch (menu_level_2) {
            case 1: // 6.1. 종료
            {
                out_file << "6.1. 종료\n";
                is_program_exit = 1;
                break;
            }
            }
        }
        }
        out_file << "\n";
    }
    out_file.close();
    return;
}

#endif //USERMANAGEMENT_MAIN_CPP
