#ifndef USERMANAGEMENT_MAIN_CPP
#define USERMANAGEMENT_MAIN_CPP

#include <iostream>
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
FILE* in_fp, * out_fp;
User* currentLoginUser;
int isLogin = 0;
UserList userDB;

int main() {
    in_fp = fopen(INPUT_FILE_NAME, "r+");
    out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    doTask();

    return 0;
}

void doTask() {
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit) {
        // 입력파일에서 메뉴 숫자 2개를 읽기
//        cout << "기능 읽어오기\n";
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1) {
        case 1: {
            switch (menu_level_2) {
            case 1: // "1.1. 회원가입“ 메뉴 부분
            {
                fprintf(out_fp, "%s", "1.1. 회원가입\n");
                SignUp controlSignUp = SignUp(); // Control Class 생성, 생성자를 통해 Boundary Class 생성 및 서로 레퍼런스 교환
                controlSignUp.getUI()->startInterface(); // 회원 가입 인터페이스 출력, 1.startInterface()
                int signupType, number; // 회사 회원 가입인지 일반 회원 가입인지 판단 하는 flag 변수
                char name[MAX_STRING], id[MAX_STRING], pw[MAX_STRING]; // 가입 정보 저장 할 변수들
                fscanf(in_fp, "%d ", &signupType); // 가입 유형 읽어오기
                if (signupType == 1) { // 회사 회원 가입이라면
                    fscanf(in_fp, "%s %d %s %s", name, &number, id, pw); // 가입 정보 읽어오기
                    controlSignUp.getUI()->signupCompanyUser(name, number, id, pw);
                    // UI를 통해 회사 회원 가입 요청, 2.signupCompanyUser()
                }
                else if (signupType == 2) { // 일반 회원 가입이라면
                    fscanf(in_fp, "%s %d %s %s", name, &number, id, pw);
                    controlSignUp.getUI()->signupGeneralUser(name, number, id, pw);
                    // UI를 통해 일반 회원 가입 요청, 2.signupGeneralUser()
                }

                break;
            }
            case 2: {
                //1.2. 회원탈퇴
                fprintf(out_fp, "%s", "1.2. 회원 탈퇴\n");
                Withdrawal controlWithdrawal = Withdrawal(); // Control Class 생성, 생성자를 통해 Boundary Class 생성 및 서로 레퍼런스 교환
                if (isLogin == 0) { // 로그인이 되어 있지 않다면 탈퇴 과정 진행 불가
                    cout << "Please log in first.\n" << endl;
                    continue;
                }
                controlWithdrawal.getUI()->startInterface(); // 회원 탈퇴 인터페이스 출력, 1.startInterface()
                controlWithdrawal.getUI()->withdrawalUser(currentLoginUser->getId());
                // UI를 통해 회원 탈퇴 요청, 2.withdrawalUser()

                break;
            }
            }
            break;
        }
        case 2: {
            switch (menu_level_2) {
            case 1: {
                // 2.1. 로그인
                fprintf(out_fp, "%s", "2.1. 로그인\n");
                char id[MAX_STRING], pw[MAX_STRING]; // 로그인 입력 정보를 저장할 변수
                fscanf(in_fp, "%s %s", id, pw); // 파일에서 로그인 정보 읽어오기
                if (isLogin != 0) { // 이미 로그인 되어 있다면 로그인 불가능
                    cout << "Please Logout First\n" << endl;
                    continue;
                }
                LogIn controlLogin = LogIn();
                controlLogin.getUI()->startInterface(); // Control Class 생성, 생성자를 통해 Boundary Class 생성 및 서로 레퍼런스 교환
                cout << "id : " << id << " pw : " << pw << endl; // 디버깅용 출력문, 로그인 정보 제대로 읽어 왔는지 확인
                controlLogin.getUI()->login(id, pw); // UI를 통해 로그인 요청, 2.login()
                if (currentLoginUser == nullptr) { // 로그인 실패 시
                    cout << "Nobody Login, isLogin: " << isLogin << endl << endl; // 로그인 되어 있지 않음을 알림
                }
                else {
                    cout << currentLoginUser->getName() << " isLogin: " << isLogin << "\n\n"; // 로그인 된 id 출력
                }
                break;
            }
            case 2: {
                // 2.2 로그아웃
                cout << "2.2. 로그아웃" << endl; // 출력 양식
                if (isLogin) { // 로그인 되어 있지 않으면 로그아웃 불가능
                    LogOut controlLogout = LogOut(); // Control Class 생성, 생성자를 통해 Boundary Class 생성 및 서로 레퍼런스 교환
                    controlLogout.getUI()->logout(); // UI를 통해 로그아웃 요청, 1.logout()
                }
                else { // 로그인 되어 있지 않은 상태
                    cout << "You are not logged in.\n" << endl;
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
                cout << "3.1. 채용 정보 등록\n";
                RegisterRecruitment registerRecruitment = RegisterRecruitment();
                char task[MAX_STRING], deadLine[MAX_STRING];
                int limitApplicantNum;
                fscanf(in_fp, "%s %d %s", task, &limitApplicantNum, deadLine);
                registerRecruitment.getUI()->registerNewRecruitments(task, limitApplicantNum, deadLine);
                break;
            }
            case 2: {
                // 3.2 등록된 채용 정보 조회
                cout << "3.2. 등록된 채용 정보 조회\n";
                InquireCompanyRecruitments inquireCompanyRecruitments = InquireCompanyRecruitments();
                //                        cout << "make control class\n";
                inquireCompanyRecruitments.getUI()->inquireRecruitments();
                break;
            }
            }
            break;
        }
        case 4: {
            switch (menu_level_2) {
            case 1: {
                // 4.1 채용 정보 검색
                cout << "4.1. 채용 정보 검색\n";
                SearchRecruitments controlRSearch = SearchRecruitments(); // Control Class 생성, 생성자를 통해 Boundary Class 생성 및 서로 레퍼런스 교환
                controlRSearch.getUI()->startInterface(); // 회원 가입 인터페이스 출력, 1.startInterface()
                char name[MAX_STRING]; // 검색 이름 저장 할 변수
                fscanf(in_fp, "%s", name);

                // 확인용
                cout << "검색이름은: " << name << endl;

                controlRSearch.getUI()->searchRecruitments(name);

                break;
            }
            case 2: {
                // 4.2 채용 지원
                cout << "4.2. 채용 지원\n";
                ApplyForRecruitment controlApply = ApplyForRecruitment(); // Control Class 생성, 생성자를 통해 Boundary Class 생성 및 서로 레퍼런스 교환
                controlApply.getUI()->startInterface(); // 회원 가입 인터페이스 출력, 1.startInterface()
                int SSN; // 검색 사업자번호 저장 할 변수
                fscanf(in_fp, "%d", &SSN);

                // 확인용
                cout << "검색 사업자번호는: " << SSN << endl;

                controlApply.getUI()->applyForRecruitment(SSN);

                break;
            }
            case 3: {
                // 4.3 지원 정보 조회
                cout << "4.3. 지원 정보 조회\n";
                if (isLogin == 0) break;
                ViewJobApplications viewJobApplications = ViewJobApplications();
                viewJobApplications.getUI()->showJobApplication();
                break;
            }
            case 4: {
                // 4.4 지원 취소
                cout << "4.4. 지원 취소\n";
                if (isLogin == 0) break;
                CancelJobApplication cancelJobApplication = CancelJobApplication();
                cancelJobApplication.getUI()->startInterface(); // 해당 과제에서는 미구현
                int SSN;
                fscanf(in_fp, "%d ", &SSN); // 사업자번호 읽어오기
                cancelJobApplication.getUI()->cancelJobApplication(SSN);
                break;
            }
            }
            break;
        }
        case 5: {
            switch (menu_level_2) {
            case 1: {
                // 5.1 지원 정보 통계
                cout << "5.1. 지원 정보 통계\n";
                if (isLogin == 1) {  // 회사 유저
                    cout << "회사유저통계\n";
                    ViewRecruitmentStatistics viewRecruitmentStatistics = ViewRecruitmentStatistics();
                    viewRecruitmentStatistics.getUI()->showStatistics();
                }
                else if (isLogin == 2) { // 일반 유저
                    cout << "일반유저통계\n";
                    ViewJobApplicationStatistics viewJobApplicationStatistics = ViewJobApplicationStatistics();
                    viewJobApplicationStatistics.getUI()->showStatistics();
                    cout << "일반유저통계 정상종료\n";
                }
                break;
            }
            }
            break;
        }
        case 6: {
            switch (menu_level_2) {
            case 1: // "6.1. 종료“ 메뉴 부분
            {
                //                        fprintf(out_fp, "6.1. 종료\n");
                cout << "6.1 종료" << endl;
                is_program_exit = 1;
                break;
            }
            }
        }
        }
    }
    return;
}

#endif //USERMANAGEMENT_MAIN_CPP
