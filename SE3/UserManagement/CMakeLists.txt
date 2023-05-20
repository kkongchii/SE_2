cmake_minimum_required(VERSION 3.25)
project(UserManagement)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(UserManagement
        LogIn.cpp
        LogIn.h
        LogInUI.cpp
        LogInUI.h
        LogOut.cpp
        LogOut.h
        LogOutUI.cpp
        LogOutUI.h
        main.cpp
        SignUp.cpp
        SignUp.h
        SignUpUI.cpp
        SignUpUI.h
        Withdrawal.cpp
        Withdrawal.h
        WithdrawalUI.cpp
        WithdrawalUI.h UserList.cpp UserList.h GeneralUser.cpp GeneralUser.h CompanyUser.cpp CompanyUser.h User.cpp User.h)
