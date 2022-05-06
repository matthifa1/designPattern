/**
 * @file state.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef STATE_H
#define STATE_H

#include "stdio.h"

typedef struct State* StatePtr; /**< incomplete Type Definition for the state */

typedef void (*EventState1Func)(StatePtr); /**< function Ptr to the State function 1 */
typedef void (*EventState2Func)(StatePtr); /**< function Ptr to the State function 2 */
typedef void (*EventState3Func)(StatePtr); /**< function Ptr to the State function 3 */

struct State{
    EventState1Func state1;
    EventState2Func state2;
    EventState2Func state3;
}; /**< implementation of the state */

void defaultImplementation(StatePtr state);

#endif