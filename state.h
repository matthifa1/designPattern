#ifndef STATE_H
#define STATE_H

#include "stdio.h"

/* incomplete type for the state representation itself */
typedef struct State* StatePtr;

typedef void (*EventState1Func)(StatePtr);
typedef void (*EventState2Func)(StatePtr);
typedef void (*EventState3Func)(StatePtr);

/*implementation of the incomplete type*/
struct State{
    EventState1Func state1;
    EventState2Func state2;
    EventState2Func state3;
};

void defaultImplementation(StatePtr state);

#endif