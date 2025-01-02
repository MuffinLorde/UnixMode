//Contains all the basic commands used in the program

#include <stdio.h>
#include <stdlib.h>
#include "simple-commands.h"

void echo(char phrase[]) {
    printf("%s\n\n", phrase);
}
//prints the phrase typed after the command to the cmd

void clear() {
    system("cls");
}
//clears the cmd

void commandError(char command[]) {
    printf("%s is an invalid command, type help to get a list of commands \n\n", command);
}
//command error, self-explanitory, check main.c for more info
