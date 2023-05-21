# JobApplication 라이브러리 생성
add_library(JobApplicationManagement
ViewJobApplications.cpp
ViewJobApplications.h
ViewJobApplicationsUI.cpp
ViewJobApplicationsUI.h
CancelJobApplication.cpp
CancelJobApplication.h
CancelJobApplicationUI.cpp
CancelJobApplicationUI.h
)

# Entity include 디렉토리 추가
target_include_directories(JobApplicationManagement PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})