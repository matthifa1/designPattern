typedef void (*command_function)(int* param);
typedef struct Command* Command_ptr;

/*Create new command*/
Command_ptr createCommand(const char* description, command_function fnc);

/*Execute Command*/
void executeCommand(Command_ptr cmd, int param);

/*free memory*/
void destroyCommand(Command_ptr cmd);
void cmd1(int* param);
void cmd2(int* param);
void cmd3(int* param);