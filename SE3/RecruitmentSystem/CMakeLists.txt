cmake_minimum_required(VERSION 3.25)
project(RecruitmentSystem)

set(CMAKE_CXX_STANDARD 14)

# UserManagement 서브디렉토리로 이동하여 CMakeLists.txt 실행
add_subdirectory(Entity)
add_subdirectory(UserManagement)
add_subdirectory(JobApplicationManagement)

# RecruitmentSystem 실행 파일 생성
add_executable(RecruitmentSystem RecruitmentSystem.cpp)


# 라이브러리 링크
target_link_libraries(JobApplicationManagement Entity)
target_link_libraries(UserManagement Entity)
target_link_libraries(RecruitmentSystem Entity)

target_link_libraries(RecruitmentSystem UserManagement)
target_link_libraries(RecruitmentSystem JobApplicationManagement)