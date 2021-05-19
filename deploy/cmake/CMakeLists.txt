# WorkSpace project.
# Module of tools: features
# [2021y-05m-18d][22:27:01] Idrisov Denis R.
################################################################################
################################################################################

set(gDEBUG "$ENV{eDEBUG}")
cmake_minimum_required(VERSION 3.1)

include("${CMAKE_CURRENT_LIST_DIR}/setup.cmake")
cmake_scenario("minimalist")

project(${gNAME_PROJECT} CXX)

################################################################################
################################################################################

if(gSTABLE_RELEASE)
    message(STATUS "gSTABLE_RELEASE: ON")
else()
    message(STATUS "gSTABLE_RELEASE: OFF")
endif()


set(hide_message
  "dHIDE_CLANG_MESSAGE=1"
  "dHIDE_MINGW_MESSAGE=1"
  "dHIDE_GCC_MESSAGE=1"
)

make_target(
    PREPROCESSOR ${hide_message}
)

make_target(
    PATH_TO_SOURCES "test"
    PREPROCESSOR ${hide_message}
)

################################################################################
################################################################################

