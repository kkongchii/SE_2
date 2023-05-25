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
        UserManagement/SignUp.cpp
        UserManagement/SignUp.h
        UserManagement/SignUpUI.cpp
        UserManagement/SignUpUI.h
        UserManagement/Withdrawal.cpp
        UserManagement/Withdrawal.h
        UserManagement/WithdrawalUI.cpp
        UserManagement/WithdrawalUI.h entity/UserList.cpp entity/UserList.h entity/GeneralUser.cpp entity/GeneralUser.h entity/CompanyUser.cpp entity/CompanyUser.h entity/User.cpp entity/User.h entity/Recruitment.cpp entity/Recruitment.h entity/JobApplicationList.cpp entity/JobApplicationList.h entity/RecruitmentList.cpp entity/RecruitmentList.h ApplicationManagement/ViewJobApplicationsUI.cpp ApplicationManagement/ViewJobApplicationsUI.h ApplicationManagement/CancelJobApplicationUI.cpp ApplicationManagement/CancelJobApplicationUI.h ApplicationManagement/ViewRecruitmentStatisticsUI.cpp ApplicationManagement/ViewRecruitmentStatisticsUI.h ApplicationManagement/ViewJobApplicationStatisticsUI.cpp ApplicationManagement/ViewJobApplicationStatisticsUI.h ApplicationManagement/ViewJobApplications.cpp ApplicationManagement/ViewJobApplications.h ApplicationManagement/CancelJobApplication.cpp ApplicationManagement/CancelJobApplication.h ApplicationManagement/ViewRecruitmentStatistics.cpp ApplicationManagement/ViewRecruitmentStatistics.h ApplicationManagement/ViewJobApplicationStatistics.cpp ApplicationManagement/ViewJobApplicationStatistics.h RecruitmentManagement/SearchRecruitmentsUI.cpp RecruitmentManagement/SearchRecruitmentsUI.h RecruitmentManagement/InquireCompanyRecruitmentsUI.cpp RecruitmentManagement/InquireCompanyRecruitmentsUI.h RecruitmentManagement/RegisterRecruitmentsUI.cpp RecruitmentManagement/RegisterRecruitmentsUI.h RecruitmentManagement/ApplyForRecruitmentUI.cpp RecruitmentManagement/ApplyForRecruitmentUI.h RecruitmentManagement/SearchRecruitments.cpp RecruitmentManagement/SearchRecruitments.h RecruitmentManagement/InquireCompanyRecruitments.cpp RecruitmentManagement/InquireCompanyRecruitments.h RecruitmentManagement/RegisterRecruitment.cpp RecruitmentManagement/RegisterRecruitment.h RecruitmentManagement/ApplyForRecruitment.cpp RecruitmentManagement/ApplyForRecruitment.h main.cpp)
