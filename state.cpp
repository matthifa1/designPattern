/**
 * @file state.cpp
 * @author Matthias Falger (none@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-06
 * 
 * @copyright Copyright (c) 2022
 * 
 * @note
 *
 * None.
 *
 * <pre>
 * MODIFICATION HISTORY:
 *
 * Ver   Who  Date	 Changes
 * ----- ---- -------- ---------------------------------------------------------
 * 1.00a mf  02/24/19 Created.
 *
 * </pre>
 *
 */

#include "state.h"

static void defaultState1 (StatePtr state)
{
    /*Fehler -> keine Aktion definiert*/
}

static void defaultState2 (StatePtr state)
{
    /*Fehler -> keine Aktion definiert*/
}
static void defaultState3 (StatePtr state)
{
    /*Fehler -> keine Aktion definiert*/
}

void defaultImplementation(StatePtr state)
{
    state->state1 = defaultState1;
    state->state2 = defaultState2;
    state->state3 = defaultState3;
}

