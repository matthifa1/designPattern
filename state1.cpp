/**
 * @file state1.cpp
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
void transitionToState1(StatePtr state){
    printf("to State 1 ");
    //empty function - non supported states are ignored
    defaultImplementation(state);
    state->state2 = fromState1toState2;
    state->state3 = fromState1toState3;
}

/**
 * @brief this function is invoked as state function 2
 * 
 * @param state State Ptr to the current state
 */
static void fromState1toState2(StatePtr state){
    printf("Transition from State 1 ");
    transitionToState2(state);
}

/**
 * @brief this function is invoked as state function 3
 * 
 * @param state State Ptr to the current state
 */
static void fromState1toState3(StatePtr state){
    printf("Transition from State 1 ");
    transitionToState3(state);
}