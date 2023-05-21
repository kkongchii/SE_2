# UserManagement 라이브러리 생성
add_library(UserManagement
    LogIn.cpp
    LogIn.h
    LogInUI.cpp
    LogInUI.h
    LogOut.cpp
    LogOut.h
    LogOutUI.cpp
    LogOutUI.h
    SignUp.cpp
    SignUp.h
    SignUpUI.cpp
    SignUpUI.h
    Withdrawal.cpp
    Withdrawal.h
    WithdrawalUI.cpp
    WithdrawalUI.h
)

# UserManagement에 include 디렉토리 추가
target_include_directories(UserManagement PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})