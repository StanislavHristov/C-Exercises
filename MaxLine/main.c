#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 1001

int main()
{
    char line[MAXSIZE];
    char maxLine[MAXSIZE];
    maxLine[0] = '\0';
    while(fgets(line, MAXSIZE, stdin) != NULL){
        if(strlen(line) > strlen(maxLine)){ // strlen returns number of symbols
            strcpy(maxLine, line); // copy
        }
    }
    puts(maxLine);
    printf("Max line is: %s\nLength: %u\n", maxLine, (unsigned)strlen(maxLine));
    return 0;
}
