#include <stdio.h>
#include <stdlib.h>
#include "abstractDataType.h"

using namespace std;

struct Command{
    const char* name;
    command_function function;
};

Command_ptr createCommand(const char* description, command_function fnc){
    // if its not an option to use malloc, define an array and return the adress in the array
    // malloc: memory in the heap will be allocated
    // array: memory in the stack will be allocated
    Command_ptr cmd = (Command_ptr)malloc(sizeof *cmd);
    if(cmd){
        cmd->name=description;
        cmd->function=fnc;
    }
    return cmd;
}

void executeCommand(Command_ptr cmd, int param)
{
    if(cmd){
        cmd->function(&param);
    }
}

void destroyCommand(Command_ptr cmd){
    free(cmd);
}

void cmd1(int* param){
    printf("Calling Command 1 with parameter: %i\n", *param);
}

void cmd2(int* param){
    printf("Calling Command 2 with parameter: %i\n", *param);
}

void cmd3(int* param){
    printf("Calling Command 3 with parameter: %i\n", *param);
}