/**
 * @file state2.cpp
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
static void fromState2toState1(StatePtr state){
    printf("Transition from State 2 ");
    transitionToState1(state);
}

/**
 * @brief replace the state functions
 * 
 * @param state State Ptr to the current state
 */
static void fromState2toState3(StatePtr state){
    printf("Transition from State 2 ");
    transitionToState3(state);

}
/**
 * @brief replace the state functions
 * 
 * @param state State Ptr to the current state
 */
void transitionToState2(StatePtr state){
    printf("to State 2 ");
    //empty function - non supported states are ignored
    defaultImplementation(state);
    state->state3 = fromState2toState3;
    state->state1 = fromState2toState1;
}