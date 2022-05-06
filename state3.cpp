/**
 * @file state3.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "state1.h"
#include "state2.h"
#include "state3.h"

/**
 * @brief replace the state functions
 * 
 * @param state State Ptr to the current state
 */
static void fromState3toState1(StatePtr state){
    printf("Transition from State 1 ");
    transitionToState1(state);
}

/**
 * @brief replace the state functions
 * 
 * @param state State Ptr to the current state
 */
static void fromState3toState2(StatePtr state){
    printf("Transition from State 1 ");
    transitionToState2(state);
}

/**
 * @brief replace the state functions
 * 
 * @param state State Ptr to the current state
 */
void transitionToState3(StatePtr state){
    printf("to State 3");
    defaultImplementation(state);
    state->state2 = fromState3toState2;
    state->state1 = fromState3toState1;
}