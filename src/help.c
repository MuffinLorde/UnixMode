//This file contains all the different helpful commands the user will need, accesed by typing help
//If you're actually reading these comments, well done, but I'm not gonna type what easch help command does, that's literally what
//they're there for

#include <stdio.h>
#include <ctype.h>
#include "help.h"

void helpList() {
    printf("For more information type help [command-name]\n\n");
    printf("CLEAR       clears the cmd\n");
    printf("PWD         Prints the working directory\n");
    printf("SDP         Sets the default directory UnixMode enters into\n");
    printf("ECHO        Prints a message onto the screen\n");
    printf("EXIT        Exits UnixMode\n");
    printf("VERSION     States which version of UnixMode you have\n\n");
}
