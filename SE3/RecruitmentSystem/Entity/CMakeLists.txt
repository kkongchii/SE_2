# Entity 라이브러리 생성
add_library(Entity
UserList.cpp
UserList.h
GeneralUser.cpp
GeneralUser.h
CompanyUser.cpp
CompanyUser.h
User.cpp
User.h
JobApplication.cpp
JobApplication.h
JobApplicationList.cpp
JobApplicationList.h
Recruitment.h
Recruitment.cpp
RecruitmentList.h
)

# Entity include 디렉토리 추가
target_include_directories(Entity PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})