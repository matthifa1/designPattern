#include "state1.h"
#include "state2.h"
#include "state3.h"

static void fromState3toState1(StatePtr state){
    printf("Transition from State 1 ");
    transitionToState1(state);
}
static void fromState3toState2(StatePtr state){
    printf("Transition from State 1 ");
    transitionToState2(state);
}
// Entry function set the pointer in the passed State structure to point to the functions of the current state
void transitionToState3(StatePtr state){
    printf("to State 3");
    defaultImplementation(state);
    state->state2 = fromState3toState2;
    state->state1 = fromState3toState1;
}