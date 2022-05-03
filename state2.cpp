#include "state1.h"
#include "state2.h"
#include "state3.h"

static void fromState2toState1(StatePtr state){
    printf("Transition from State 2 ");
    transitionToState1(state);
}
static void fromState2toState3(StatePtr state){
    printf("Transition from State 2 ");
    transitionToState3(state);

}
// Entry function set the pointer in the passed State structure to point to the functions of the current state
void transitionToState2(StatePtr state){
    printf("to State 2 ");
    //empty function - non supported states are ignored
    defaultImplementation(state);
    state->state3 = fromState2toState3;
    state->state1 = fromState2toState1;
}