#include "state.h"

static void defaultState1 (StatePtr state)
{
    /**/
}

static void defaultState2 (StatePtr state)
{
    /**/
}
static void defaultState3 (StatePtr state)
{
    /**/
}

void defaultImplementation(StatePtr state)
{
    state->state1 = defaultState1;
    state->state2 = defaultState2;
    state->state3 = defaultState3;
}

