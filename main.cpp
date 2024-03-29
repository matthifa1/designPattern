/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "abstractDataType.h"
#include "state.h"
#include "state1.h"
#include "state2.h"
#include "state3.h"
#include "stdlib.h"

/********************************************//**
 *  Main Loop
 *  @param arc the typical arguments
 ***********************************************/
int main(int arc, char* argv[]){
    /*Abstract Data Type; Creational Pattern*/
    /*The Implementation is hidden in abstractDataType.cpp*/
    Command_ptr command1 = createCommand("command 1", cmd1);
    Command_ptr command2 = createCommand("command 2", cmd2);
    Command_ptr command3 = createCommand("command 3", cmd3);
    
    int parameter = 42;
    executeCommand(command1, 42);
    executeCommand(command2, 42);
    executeCommand(command2, 43);

    /*State machine client code*/
    /**/
    /*struct StateMachineContext{
        const char* description;
        State state;
    }*/
    State myStateMachine; 
    transitionToState1(&myStateMachine);
    myStateMachine.state1(&myStateMachine);
    myStateMachine.state2(&myStateMachine);
    myStateMachine.state1(&myStateMachine);
	myStateMachine.state1(&myStateMachine);
}

