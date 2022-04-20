cmake_minimum_required(VERSION 3.10.2)

SET(PROJECT_DEP_PATH "../../../common")


add_executable(cpstdin cpstdin.c ${PROJECT_DEP_PATH}/csapp.c)
add_executable(cpfile cpfile.c ${PROJECT_DEP_PATH}/csapp.c)
add_executable(statcheck statcheck.c ${PROJECT_DEP_PATH}/csapp.c)
add_executable(readdir readdir.c ${PROJECT_DEP_PATH}/csapp.c)


target_link_libraries(cpstdin PRIVATE pthread)
target_link_libraries(cpfile PRIVATE pthread)
target_link_libraries(statcheck PRIVATE pthread)
target_link_libraries(readdir PRIVATE pthread)
