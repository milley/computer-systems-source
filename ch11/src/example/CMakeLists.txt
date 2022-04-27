cmake_minimum_required(VERSION 3.10.2)

SET(PROJECT_DEP_PATH "../../../common")


add_executable(hostinfo hostinfo.c ${PROJECT_DEP_PATH}/csapp.c)
add_executable(echoclient echoclient.c ${PROJECT_DEP_PATH}/csapp.c)
add_executable(echoserver echoserver.c echo.c ${PROJECT_DEP_PATH}/csapp.c)


target_link_libraries(hostinfo PRIVATE pthread)
target_link_libraries(echoclient PRIVATE pthread)
target_link_libraries(echoserver PRIVATE pthread)
