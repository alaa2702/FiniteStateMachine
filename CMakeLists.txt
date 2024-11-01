cmake_minimum_required(VERSION 3.25)
project(FiniteStateMachine)

set(CMAKE_CXX_STANDARD 14)

add_executable(FiniteStateMachine
        src/main.cpp src/DFA/deterministicFiniteAutomaton.h src/DFA/deterministicFiniteAutomaton.cpp)
