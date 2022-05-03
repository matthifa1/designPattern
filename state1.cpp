#include "state1.h"
#include "state2.h"
#include "state3.h"

void transitionToState1(StatePtr state){
    printf("to State 1 ");
    //empty function - non supported states are ignored
    defaultImplementation(state);
    state->state2 = fromState1toState2;
    state->state3 = fromState1toState3;
}

static void fromState1toState2(StatePtr state){
    printf("Transition from State 1 ");
    transitionToState2(state);
}

static void fromState1toState3(StatePtr state){
    printf("Transition from State 1 ");
    transitionToState3(state);
}