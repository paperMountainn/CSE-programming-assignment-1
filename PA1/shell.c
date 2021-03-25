#include "shell.h"

// #define hannah
#define zishan

#ifdef hannah
char* pathRoot= "/home/hannah/Downloads/CSE_PA1/CSE-programming-assignment-1/PA1/shellPrograms/";

#elif defined(zishan)
char* pathRoot = "/home/pprmountain/Desktop/CSE-programming-assignment-1/PA1/shellPrograms/"; //check path here 

#else
char* pathRoot = "";
#endif


void pathHelperFunction(char* outputPath, char* fileName){
  strcpy(outputPath,pathRoot);
  strcat(outputPath,fileName);
}

/*
 List all files matching the name in args[1] under current directory and subdirectories
*/
int shellFind(char **args)
{

  printf("shellFind is called!\n");

  /** TASK 4 **/
  // 1. Execute the binary program 'find' in shellPrograms using execvp system call
  // 2. Check if execvp is successful by checking its return value
  // 3. A successful execvp never returns, while a failed execvp returns -1
  // 4. Print some kind of error message if it returns -1
  // 5. return 1 to the caller of shellFind 
  char outputFile[100];
  pathHelperFunction(outputFile,"find");
  int execvp_return_val = execvp(outputFile,args);
  //int execvp_return_val = execvp("/home/pprmountain/Desktop/CSE-programming-assignment-1/PA1/shellPrograms/find",args);
  
  //print error message if -1
  if(execvp_return_val == -1){
    printf("error in calling find using execvp\n");
  }
  return 1;

}

/**
 Allows one to display the content of the file
 */
int shellDisplayFile(char **args)
{
  printf("shellDisplayFile is called!\n");

  /** TASK 4 **/
  // 1. Execute the binary program 'display' in shellPrograms using execvp system call
  // 2. Check if execvp is successful by checking its return value
  // 3. A successful execvp never returns, while a failed execvp returns -1
  // 4. Print some kind of error message if it returns -1
  // 5. return 1 to the caller of shellDisplayFile if execvp fails to allow loop to continue
  char outputFile[100];
  pathHelperFunction(outputFile,"display");
  int execvp_return_val = execvp(outputFile,args);
  // int execvp_return_val = execvp("/home/pprmountain/Desktop/CSE-programming-assignment-1/PA1/shellPrograms/display",args);
  
  //print error message if -1
  if(execvp_return_val == -1){
    printf("error in calling display using execvp\n");
  }

  return 1;

}

/*
	List the items in the directory and subdirectory
*/
int shellListDirAll(char **args)
{

  printf("shellListDirAll is called!\n");

  /** TASK 4 **/
  // 1. Execute the binary program 'listdirall' in shellPrograms using execvp system call
  // 2. Check if execvp is successful by checking its return value
  // 3. A successful execvp never returns, while a failed execvp returns -1
  // 4. Print some kind of error message if it returns -1
  // 5. return 1 to the caller of shellListDirAll if execvp fails to allow loop to continue
  char outputFile[100];

  // outputFile is the path here, we just append "listdirall" to it
  pathHelperFunction(outputFile,"listdirall");
  int execvp_return_val = execvp(outputFile,args);
  // int execvp_return_val = execvp("/home/pprmountain/Desktop/CSE-programming-assignment-1/PA1/shellPrograms/listdirall",args);  

  //print error message if -1
  if(execvp_return_val == -1){
    printf("error in calling listdirall using execvp\n");
  }

  return 1;

}


/*
	List the items in the directory
*/
int shellListDir(char **args)
{
  printf("shellListDir is called!\n");

  /** TASK 4 **/
  // 1. Execute the binary program 'listdir' in shellPrograms using execvp system call
  // 2. Check if execvp is successful by checking its return value
  // 3. A successful execvp never returns, while a failed execvp returns -1
  // 4. Print some kind of error message if it returns -1
  // 5. return 1 to the caller of shellListDir
  // int execvp_return_val = execvp("shellPrograms/listdir", args);
  
  //printf("%s\n",strcat(pathRoot,"shellPrograms/listdir"));
  char outputFile[100];
  pathHelperFunction(outputFile,"listdir");
  int execvp_return_val = execvp(outputFile,args);
  // int execvp_return_val = execvp("/home/pprmountain/Desktop/CSE-programming-assignment-1/PA1/shellPrograms/listdir", args);
  //print error message if -1
  if(execvp_return_val == -1){
    printf("error in calling listdir using execvp\n");
  }

  return 1;
}

/**
   Counts how many lines are there in a text file. 
   A line is terminated by \n character
**/
int shellCountLine(char **args)
{
  printf("shellCountLine is called!\n");

  /** TASK 4 **/
  // 1. Execute the binary program 'countline' in shellPrograms using execvp system call
  // 2. Check if execvp is successful by checking its return value
  // 3. A successful execvp never returns, while a failed execvp returns -1
  // 4. Print some kind of error message if it returns -1
  // 5. return 1 to the caller of shellCountLine if execvp fails to allow loop to continue
  char outputFile[100];
  pathHelperFunction(outputFile,"countline");
  int execvp_return_val = execvp(outputFile,args);
  // int execvp_return_val = execvp("/home/pprmountain/Desktop/CSE-programming-assignment-1/PA1/shellPrograms/countline",args);
  
  //print error message if -1
  if(execvp_return_val == -1){
    printf("error in calling countline using execvp\n");
  }
  
  return 1;
}

/**
 * Allows one to create a daemon process
 */
int shellSummond(char **args)
{
  printf("shellDaemonize is called!\n");

  /** TASK 4 **/
  // 1. Execute the binary program 'summond' in shellPrograms using execvp system call
  // 2. Check if execvp is successful by checking its return value
  // 3. A successful execvp never returns, while a failed execvp returns -1
  // 4. Print some kind of error message if it returns -1
  // 5. return 1 to the caller of shellDaemonize if execvp fails to allow loop to continue
  char outputFile[100];
  pathHelperFunction(outputFile,"summond");
  int execvp_return_val = execvp(outputFile,args);
  // int execvp_return_val = execvp("/home/pprmountain/Desktop/CSE-programming-assignment-1/PA1/shellPrograms/summond",args);
  
  //print error message if -1
  if(execvp_return_val == -1){
    printf("error in calling summond using execvp\n");
  }

  return 1;

}


/**
 * Allows one to check daemon process
 * 
 */
int shellCheckDaemon(char **args)
{
  printf("shellCheckDaemon is called!\n");

  /** TASK 4 **/
  // 1. Execute the binary program 'checkdaemon' in shellPrograms using execvp system call
  // 2. Check if execvp is successful by checking its return value
  // 3. A successful execvp never returns, while a failed execvp returns -1
  // 4. Print some kind of error message if it returns -1
  // 5. return 1 to the caller of shellCheckDaemon if execvp fails to allow loop to continue
  char outputFile[100];
  pathHelperFunction(outputFile,"checkdaemon");
  int execvp_return_val = execvp(outputFile,args);
  // int execvp_return_val = execvp("/home/pprmountain/Desktop/CSE-programming-assignment-1/PA1/shellPrograms/checkdaemon",args);
  
  //print error message if -1
  if(execvp_return_val == -1){
    printf("error in calling checkdaemon using execvp\n");
  }
  return 1;
}

/**
   Allows one to change directory 
 */
int shellCD(char **args)
{
  printf("shellCD is called! \n");
  if (args[1] == NULL)
  {
    fprintf(stderr, "CSEShell: expected argument to \"cd\"\n");
  }
  else
  {
    // chdir() changes the current working directory of the calling process
    // to the directory specified in path.
    if (chdir(args[1]) != 0)
    { //use chdir
      perror("CSEShell:");
    }
  }

  return 1;
}

/**
   Prints out the usage and
   list of commands implemented
 */
int shellHelp(char **args)
{
  printf("shellHelp is called! \n");
  int i;
  printf("CSE Shell Interface\n");
  printf("Usage: command arguments\n");
  printf("The following commands are implemented:\n");

  for (i = 0; i < numOfBuiltinFunctions(); i++)
  {
    printf("  %s\n", builtin_commands[i]); //print all the commands that have been implemented in the shell program
  }

  return 1;
}

/**
  Returns 0, to terminate execution from the shellLoop
 */
int shellExit(char **args)
{
  return 0;
}


/*
  Builtin function implementations.
*/
int shellUsage(char **args)
{
  int functionIndex = -1;


  // added preconditions, must have an argument...
  printf("shellUsage is called! \n");
  if (args[1] == NULL)
  {
    fprintf(stderr, "CSEShell: expected argument to \"usage\"\n");
    return 1;
  }

  // Check if the commands exist in the command list
  for (int i = 0; i < numOfBuiltinFunctions(); i++)
  {
    if (strcmp(args[1], builtin_commands[i]) == 0)
    {
      //pass it to the functions
      functionIndex = i;
    }
  }

  switch (functionIndex)
  {
  case 0:
    printf("Type: cd directory_name\n");
    break;
  case 1:
    printf("Type: help\n");
    break;
  case 2:
    printf("Type: exit\n");
    break;
  case 3:
    printf("Type: usage command\n");
    break;
  case 4:
    printf("Type: display filename\n");
    break;
  case 5:
    printf("Type: countline filename\n");
    break;
  case 6:
    printf("Type: listdir\n");
    printf("Type: listdir -a to list all contents in the current dir and its subdirs\n");
    break;
  case 7:
    printf("Type: listdirall\n");
    break;
  case 8:
    printf("Type: find filename_keyword\n");
    break;
  case 9:
    printf("Type: summond \n");
    break;
  case 10:
    printf("Type: checkdaemon \n");
    break;
  default:
    printf("Command %s not found\n", args[0]);
    break;
  }

  return 1;
}
/*
  End of builtin function implementations.
*/

/**
   Execute inputs when its in the default functions
   Otherwise, print error message and return to loop
 */
int shellExecuteInput(char **args)
{

  int res;
  pid_t pid;
  int command_index;
  
  /** TASK 3 **/

  // 1. Check if args[0] is NULL. If it is, an empty command is entered, return 1
  if (args[0] == NULL){
    printf("No command entered! Please enter command! \n");

    return 1;
  }


  else{
    // iterate through to see whether args[0] is in buildInCommands, and not cd, help, exit or usage
    for (int i = 0; i < numOfBuiltinFunctions(); i++){

      // compare if arg[0] == builtin_commands[i]
      // if res = 0, means args[0] == builtin_commands[i], then break the for loop and move on to execute it 
      // res = 0 : args[0] and commands same, so we need to execute user's command
      // if res = 1: no valid commands found
      res = strcmp(args[0], builtin_commands[i]);


      // command is part of the builtin_commands! execute it!
      if (res == 0){

        command_index = i;

        if (strcmp("cd", builtin_commands[command_index]) == 0){
          return shellCD(args);
        }
        if (strcmp("help", builtin_commands[command_index]) == 0){
          return shellHelp(args);
        }
        if (strcmp("usage", builtin_commands[command_index]) == 0){
          return shellUsage(args);
        }
        if (strcmp("exit", builtin_commands[command_index]) == 0){
          return shellExit(args);
        }

      // if the command is not cd, help, usage, exit, simply set command_index to i, then break the for loop
        break;
      }
      
    }

    // if command is valid, do fork() to create a child process to execute command
    if (res == 0){
      int child_task_return = 0;
      pid = fork();

      // check error for fork
      if (pid < 0){
        fprintf(stderr, "Fork has failed. Exiting now");
        return 1; // exit error
      }

      // child process do this
      else if (pid == 0){
        // printf("fork() works, waiting for child \n");
        // load a new program into the child
        // execlp basically replaced the entire process image, child executes a different thing from parent

        // execute command based on command_index, using builtin_commandFunc[] struc
        child_task_return =  builtin_commandFunc[command_index](args);
        exit(1);
      }

      // 5. For the parent process, wait for the child process to complete and fetch the child's return value.
      else{
        // check child exit status

        int status;
        // not sure how this works?????
        waitpid(pid, &status, WUNTRACED);      
        int exit_status = 0;

        //thinking of putting this outside 
        //cause they asked us to return the exit status of the child
        // obtain exit_status of child
        exit_status = WEXITSTATUS(status);

        //if child terminates properly, WIFEXITED(status) returns TRUE
        // if (WIFEXITED(status)){

        //   printf("exit status of child is %d \n", exit_status);
        //   printf("Child has exited.\n");
          
        // }

        return exit_status;


      }
    }

      
  

    // if command invalid, then exit 
    else{
      printf("Invalid command received. Type help to see what commands are implemented. \n");
      return 1;
    }

  }
  // 2. Otherwise, check if args[0] is in any of our builtin_commands, and that it is NOT cd, help, exit, or usage.
  // 3. If conditions in (2) are satisfied, perform fork(). Check if fork() is successful.
  // 4. For the child process, execute the appropriate functions depending on the command in args[0]. Pass char ** args to the function.
  // 5. For the parent process, wait for the child process to complete and fetch the child's return value.
  // 6. Return the child's return value to the caller of shellExecuteInput

  // 7. If args[0] is not in builtin_command, print out an error message to tell the user that command doesn't exist and return 1

  return 1;
}

/**
   Read line from stdin, return it to the Loop function to tokenize it
 */
char *shellReadLine(void)
{
  /** TASK 1 **/
  // read one line from stdin using getline()

  // 1. Allocate a memory space to contain the string of input from stdin using malloc. Malloc should return a char* that persists even after this function terminates.
  // 2. Check that the char* returned by malloc is not NULL
  // 3. Fetch an entire line from input stream stdin using getline() function. getline() will store user input onto the memory location allocated in (1)
  // 4. Return the char*

  size_t bufferSize = 100; //arbitrary number 
  char *buffer = (char*)malloc(sizeof(char*)*bufferSize);
  
  if(buffer==NULL){
    exit(1); //not sure if we should exit or just return NULL
    //return NULL;
  } else{
    getline(&buffer,&bufferSize,stdin);
    return buffer;
  }
}

/**
 Receives the *line, and return char** that tokenize the line
**/

char **shellTokenizeInput(char *line)
{

  /** TASK 2 **/
  // 1. Allocate a memory space to contain pointers (addresses) to the first character of each word in *line. Malloc should return char** that persists after the function terminates.

  size_t bufferSize = 8; //arbitrary numbers

  // tokenBuffer is an array of tokenized inputs, which we can access with tokenBuffer[index]
  char** tokenBuffer = malloc(sizeof(char *) * bufferSize);
  
  char* token = strtok(line, SHELL_INPUT_DELIM);

  int index = 0;


  // 2. Check that char ** that is returend by malloc is not NULL
  if (tokenBuffer == NULL){
    exit(1);
  } 
  else{
    tokenBuffer[index] = token;
    index++;

    while (token != NULL){
      token = strtok(NULL, SHELL_INPUT_DELIM);
      tokenBuffer[index] = token;
      index++;
    }

    // NULL terminate
    tokenBuffer[index] = NULL;

  }
  // 3. Tokenize the *line using strtok() function
  // 4. Return the char **

  return tokenBuffer;

  /** TASK 2 **/
  // 1. Allocate a memory space to contain pointers (addresses) to the first character of each word in *line. Malloc should return char** that persists after the function terminates.
  // 2. Check that char ** that is returend by malloc is not NULL
  // 3. Tokenize the *line using strtok() function
  // 4. Return the char **

}

/**
  The main loop where one reads line,
  tokenize it, and then executes the command
 */
void shellLoop(void)
{
  //instantiate local variables
  char *line;  // to accept the line of string from user
  char **args; // to tokenize them as arguments separated by spaces
  int status;  // to tell the shell program whether to terminate shell or not 


  /** TASK 5 **/
  //write a loop where you do the following: 

    do{
      // 1. print the message prompt
      printf("CSEShell> ");
      // 2. clear the buffer and move the output to the console using fflush
      fflush(stdin);
      fflush(stdout);

      // 3. invoke shellReadLine() and store the output at line
      line = shellReadLine();

      // 4. invoke shellTokenizeInput(line) and store the output at args**
      args = shellTokenizeInput(line);

      // 5. execute the tokens using shellExecuteInput(args)
      status = shellExecuteInput(args);

      // 6. free memory location containing the strings of characters
      free(line);

      // 7. free memory location containing char* to the first letter of each word in the input string
      free(args);

      // 8. check if shellExecuteInput returns 1. If yes, loop back to Step 1 and prompt user with new input. Otherwise, exit the shell. 
      if (status != 1){
        break;
      }

    } while(1);
    
}

int main(int argc, char **argv)
{
  //original function
  // printf("Shell Run successful. Running now: \n");


  // Test Task 3

 printf("Shell Run successful. Running now: \n");
 
//  char* line = shellReadLine();
//  printf("The fetched line is : %s \n", line);
 
//  char** args = shellTokenizeInput(line);
//  printf("The first token is %s \n", args[0]);
//  printf("The second token is %s \n", args[1]);

//  shellExecuteInput(args);

//    // Run command loop, T5 test code
  shellLoop();
  return 0;



}
