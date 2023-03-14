cmake_minimum_required(VERSION 3.1)



project(CreateVector)



set(REMOVE_SMILES_SRC main.cpp CFabricVector0.cpp CFabricVector1.cpp CVector.cpp CVector0.cpp CVector1.cpp)

set(REMOVE_SMILES_HDR autoTest.h CreateVector.h CFabricVector.h CFabricVector0.h CFabricVector1.h CVector.h CVector0.h CVector1.h)



#add_library(vector STATIC ${VECTOR_SRC} ${VECTOR_HDR})

add_executable(${PROJECT_NAME} ${REMOVE_SMILES_SRC} ${REMOVE_SMILES_HDR})



set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-deprecated -O2 -Wall -Werror -Wnon-virtual-dtor -std=c++14")
