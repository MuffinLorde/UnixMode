//This file contains all the different helpful commands the user will need, accesed by typing help
//If you're actually reading these comments, well done, but I'm not gonna type what easch help command does, that's literally what
//they're there for

#include <stdio.h>
#include <ctype.h>
#include "help.h"

void listCommand(char command[32], char description[256]) {
    char upperCommand[32];
    int i;

    for (i = 0; command[i] != '\0' && i < 31; i++) {
        upperCommand[i] = toupper(command[i]);
    }
    upperCommand[i] = '\0';

    printf("%s      %s\n", upperCommand, description);
    return 0;
}

void helpList() {
    printf("For more information type help [command-name]\n\n");
    printf("CLEAR       clears the cmd\n");
    printf("PWD         Prints the working directory\n");
    printf("SDP         Sets the default directory UnixMode enters into\n");
    printf("ECHO        Prints a message onto the screen\n");
    printf("EXIT        Exits UnixMode\n");
    printf("VERSION     States which version of UnixMode you have\n\n");

/*    printf("For more information type help [command-name]\n\n");
    listCommand("clear      ", "Clears the cmd");
    listCommand("echo       ", "Prints a message onto the screen");
    listCommand("pwd        ", "Prints the working directory");
    listCommand("sdp        ", "Sets the default directory UnixMode enters into");
    listCommand("exit       ", "Exits UnixMode");
    listCommand("version    ", "States which version of UnixMode you have");
    printf("\n"); */
}
