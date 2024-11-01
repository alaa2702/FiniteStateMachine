/*
 * author: Alaa Mohammed
 * date: 28/10/2024
 * description: This is the header file for the Deterministic Finite Automaton
 */
#ifndef FINITESTATEMACHINE_DETERMINISTICFINITEAUTOMATON_H
#define FINITESTATEMACHINE_DETERMINISTICFINITEAUTOMATON_H

struct DeterministicFiniteAutomaton {
    unsigned int states;
    unsigned int inputs;
    unsigned int initialState;
    unsigned int finalStates;
    unsigned int transitions;
};



#endif //FINITESTATEMACHINE_DETERMINISTICFINITEAUTOMATON_H
