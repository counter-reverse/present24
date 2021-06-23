cmake_minimum_required(VERSION 3.10)

# set the project name
project(present24)


# add the executable
add_executable(main main.c
                    src/core/permutation/permutation.c
                    src/core/substitution/substitution.c
                    include/permutation.h
                    include/substitution.h
                    include/round.h
                    include/values.h
                    )

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)