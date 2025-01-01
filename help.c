//This file contains all the different helpful commands the user will need, accesed by typing help
//If you're actually reading these comments, well done, but I'm not gonna type what easch help command does, that's literally what
//they're there for

#include <stdio.h>
#include "help.h"

void helpList() {
    printf("For more information type help [command-name]\n\n");
    printf("CLEAR       clears the cmd\n");
    printf("ECHO        Prints a message onto the screen\n");
    printf("EXIT        Exits WBASH\n");
    printf("VERSION     States which version of WBASH you have\n\n");
}
