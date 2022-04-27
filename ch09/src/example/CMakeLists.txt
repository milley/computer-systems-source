cmake_minimum_required(VERSION 3.10.2)

SET(PROJECT_DEP_PATH "../../../common")


add_executable(staticsize staticsize.c ${PROJECT_DEP_PATH}/csapp.c)
add_executable(dynamicsize dynamicsize.c ${PROJECT_DEP_PATH}/csapp.c)


target_link_libraries(staticsize PRIVATE pthread)
target_link_libraries(dynamicsize PRIVATE pthread)
