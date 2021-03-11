#include "shellPrograms.h"

/*
Count the number of lines in a file 
*/
int shellCountLine_code(char **args)
{

    /** TASK 6  **/
    // ATTENTION: you need to implement this function from scratch and not to utilize other system program to do this
    // 1. Given char** args, open file in READ mode based on the filename given in args[1] using fopen()
    // 2. Check if file exists by ensuring that the FILE* fp returned by fopen() is not NULL
    // 3. Read the file line by line by using getline(&buffer, &size, fp)
    // 4. Loop, as long as getline() does not return -1, keeps reading and increment the count
    // 6. Close the FILE*
    // 7. Print out how many lines are there in this particular filename
    // 8. Return 1, to exit program

    int numLinesOutput = 0;
    size_t bufferSize = 100; //arbitrary number 
    char *buffer = (char*)malloc(sizeof(char*)*bufferSize);
    if(buffer==NULL){
        printf("buffer malloc not ok, exit");
        return 1;
    }
    
    //open file
    FILE* fp = fopen(args[1], "r");
    if(fp == NULL) { //error 
        printf("File not found\n");
        return 1; 
    } else{
        //loop through the whole file
        while(getline(&buffer, &bufferSize,fp)!=-1){
            numLinesOutput++;
        }
        //close file
        fclose(fp);
    }

    printf("There are %d lines in %s\n", numLinesOutput,args[1]);
    
    return 1;
}

int main(int argc, char **args)
{
    return shellCountLine_code(args);
}