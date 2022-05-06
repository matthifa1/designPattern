#ifndef STATE1_H
#define STATE1_H

/**
 * @file state1.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "state.h"

void transitionToState1(StatePtr state);
static void fromState1toState2(StatePtr state);
static void fromState1toState3(StatePtr state);

#endif