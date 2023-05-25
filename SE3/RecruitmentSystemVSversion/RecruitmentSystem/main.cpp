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

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "../input.txt"
#define OUTPUT_FILE_NAME "../output.txt"

// �Լ� ����
void doTask();


// ���� ����
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
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    cout << "�׽�Ʈ\n";

    while (!is_program_exit) {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        in_file >> menu_level_1 >> menu_level_2;

        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1) {
        case 1: {
            switch (menu_level_2) {
            case 1: // "1.1. ȸ�����ԡ� �޴� �κ�
            {
                out_file << "1.1. ȸ������\n";
                SignUp controlSignUp = SignUp();
                controlSignUp.getUI()->startInterface();
                int signupType, number;
                string name, id, pw;
                in_file >> signupType;
                if (signupType == 1) { // ȸ�� ȸ�� �����̶��
                    in_file >> name >> number >> id >> pw;
                    controlSignUp.getUI()->signupCompanyUser(out_file, name, number, id, pw);
                }
                else if (signupType == 2) { // �Ϲ� ȸ�� �����̶��
                    in_file >> name >> number >> id >> pw;
                    controlSignUp.getUI()->signupGeneralUser(out_file, name, number, id, pw);
                }

                break;
            }
            case 2: {
                //1.2. ȸ��Ż��
                out_file << "1.2. ȸ�� Ż��\n";
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
                // 2.1. �α���
                out_file << "2.1. �α���\n";
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
                // 2.2 �α׾ƿ�
                out_file << "2.2. �α׾ƿ�\n";
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
                // 3.1 ä�� ���� ���
                out_file << "3.1. ä�� ���� ���\n";
                RegisterRecruitment registerRecruitment = RegisterRecruitment();
                registerRecruitment.getUI()->startInterface();
                string task, deadLine;
                int limitApplicantNum;
                in_file >> task >> limitApplicantNum >> deadLine;
                registerRecruitment.getUI()->registerNewRecruitments(out_file, task, limitApplicantNum, deadLine);
                break;
            }
            case 2: {
                // 3.2 ��ϵ� ä�� ���� ��ȸ
                out_file << "3.2. ��ϵ� ä�� ���� ��ȸ\n";
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
                // 4.1 ä�� ���� �˻�
                out_file << "4.1. ä�� ���� �˻�\n";
                SearchRecruitments controlRSearch = SearchRecruitments();
                controlRSearch.getUI()->startInterface();
                string name;
                in_file >> name;
                controlRSearch.getUI()->searchRecruitments(out_file, name);

                break;
            }
            case 2: {
                // 4.2 ä�� ����
                out_file << "4.2. ä�� ����\n";
                ApplyForRecruitment controlApply = ApplyForRecruitment();
                controlApply.getUI()->startInterface();
                int SSN;
                in_file >> SSN;
                controlApply.getUI()->applyForRecruitment(out_file, SSN);

                break;
            }
            case 3: {
                // 4.3 ���� ���� ��ȸ
                out_file << "4.3. ���� ���� ��ȸ\n";
                if (isLogin == 0) break;
                ViewJobApplications viewJobApplications = ViewJobApplications();
                viewJobApplications.getUI()->showJobApplication(out_file);
                break;
            }
            case 4: {
                // 4.4 ���� ���
                out_file << "4.4. ���� ���\n";
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
                // 5.1 ���� ���� ���
                out_file << "5.1. ���� ���� ���\n";
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
            case 1: // 6.1. ����
            {
                out_file << "6.1. ����\n";
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
