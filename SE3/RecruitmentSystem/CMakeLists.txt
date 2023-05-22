cmake_minimum_required(VERSION 3.25)
project(UserManagement)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(UserManagement
        UserManagement/LogIn.cpp
        UserManagement/LogIn.h
        UserManagement/LogInUI.cpp
        UserManagement/LogInUI.h
        UserManagement/LogOut.cpp
        UserManagement/LogOut.h
        UserManagement/LogOutUI.cpp
        UserManagement/LogOutUI.h
        main.cpp
        UserManagement/SignUp.cpp
        UserManagement/SignUp.h
        UserManagement/SignUpUI.cpp
        UserManagement/SignUpUI.h
        UserManagement/Withdrawal.cpp
        UserManagement/Withdrawal.h
        UserManagement/WithdrawalUI.cpp
        UserManagement/WithdrawalUI.h Entity/UserList.cpp Entity/UserList.h Entity/GeneralUser.cpp Entity/GeneralUser.h Entity/CompanyUser.cpp Entity/CompanyUser.h Entity/User.cpp Entity/User.h Entity/Recruitment.cpp Entity/Recruitment.h Entity/JobApplicationList.cpp Entity/JobApplicationList.h Entity/RecruitmentList.cpp Entity/RecruitmentList.h ApplicationManagement/ViewJobApplicationsUI.cpp ApplicationManagement/ViewJobApplicationsUI.h ApplicationManagement/CancelJobApplicationUI.cpp ApplicationManagement/CancelJobApplicationUI.h ApplicationManagement/ViewRecruitmentStatisticsUI.cpp ApplicationManagement/ViewRecruitmentStatisticsUI.h ApplicationManagement/ViewJobApplicationStatisticsUI.cpp ApplicationManagement/ViewJobApplicationStatisticsUI.h ApplicationManagement/ViewJobApplications.cpp ApplicationManagement/ViewJobApplications.h ApplicationManagement/CancelJobApplication.cpp ApplicationManagement/CancelJobApplication.h ApplicationManagement/ViewRecruitmentStatistics.cpp ApplicationManagement/ViewRecruitmentStatistics.h ApplicationManagement/ViewJobApplicationStatistics.cpp ApplicationManagement/ViewJobApplicationStatistics.h RecruitmentManagement/SearchRecruitmentsUI.cpp RecruitmentManagement/SearchRecruitmentsUI.h RecruitmentManagement/InquireCompanyRecruitmentsUI.cpp RecruitmentManagement/InquireCompanyRecruitmentsUI.h RecruitmentManagement/RegisterRecruitmentsUI.cpp RecruitmentManagement/RegisterRecruitmentsUI.h RecruitmentManagement/ApplyForRecruitmentUI.cpp RecruitmentManagement/ApplyForRecruitmentUI.h RecruitmentManagement/SearchRecruitments.cpp RecruitmentManagement/SearchRecruitments.h RecruitmentManagement/InquireCompanyRecruitments.cpp RecruitmentManagement/InquireCompanyRecruitments.h RecruitmentManagement/RegisterRecruitment.cpp RecruitmentManagement/RegisterRecruitment.h RecruitmentManagement/ApplyForRecruitment.cpp RecruitmentManagement/ApplyForRecruitment.h)
