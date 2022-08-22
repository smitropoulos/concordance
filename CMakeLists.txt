cmake_minimum_required(VERSION 3.23)
project(concordance)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)

FetchContent_MakeAvailable(googletest)

add_library(concordance
            src/FileInput.cpp
            src/SentenceTokenizer.cpp
            src/StringUtils.cpp
            src/Outputter.cpp
            src/WordMapConstructor.cpp
            )

add_executable(conc
               src/main.cpp
               )

target_link_libraries(conc concordance)

add_subdirectory(tests)
