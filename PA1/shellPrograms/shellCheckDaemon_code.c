#include "shellPrograms.h"

/*  A program that prints how many summoned daemons are currently alive */
int shellCheckDaemon_code()
{

   /* TASK 8 */
   //Create a command that trawl through output of ps -efj and contains "summond"
   char *command = malloc(sizeof(char) * 256);
   // sprintf(command, "ps -efj | grep summond  | grep -v tty > output.txt");
   
   // added this cause in my com, the grep command was showing up 
   sprintf(command, "ps -efj | grep summond | grep -v grep | grep -v tty > output.txt ");

   // TODO: Execute the command using system(command) and check its return value
   int systemCommandRet = system(command);
   free(command);

   if(systemCommandRet == -1){
      return 1;
   }


   int live_daemons = 0;
   // TODO: Analyse the file output.txt, wherever you set it to be. You can reuse your code for countline program
   // 1. Open the file
   // 2. Fetch line by line using getline()
   // 3. Increase the daemon count whenever we encounter a line
   // 4. Close the file
   // 5. print your result
   //open file

   int numLinesOutput = 0;
   size_t bufferSize = 100; //arbitrary number 
   char *buffer = (char*)malloc(sizeof(char*)*bufferSize);
   if(buffer==NULL){
      printf("buffer malloc not ok, exit");
      return 1;
   }

   FILE* fp = fopen("output.txt", "r");
   if(fp == NULL) { //error 
      printf("File not found\n");
      return 1;
   } else{
      //loop through the whole file
      while(getline(&buffer, &bufferSize,fp)!=-1){
         printf("%s\n",buffer);
         live_daemons++;
      }
      
   }

   //printf("There are %d lines\n", live_daemons);
    
   if (live_daemons == 0)
      printf("No daemon is alive right now\n");
   else
   {
      printf("There are in total of %d live daemons \n", live_daemons);
   }


   // TODO: close any file pointers and free any statically allocated memory 
   
   //close file
   fclose(fp);
   return 1;
}

int main(int argc, char **args)
{
   return shellCheckDaemon_code();
}