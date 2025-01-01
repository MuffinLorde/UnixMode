#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include "startup.h"
#include "simple-commands.h"
#include "file-manage.h"
#include "help.h"

void mainFunc();

int main() {
    system("cls");
    mainFunc();
    return 0;
}

void mainFunc() {
    char usrCommand[256];
    char userName[256];
    char compName[256];
    char path[512];

    getUserName(userName, sizeof(userName));
    getCompName(compName, sizeof(compName));

    snprintf(path, sizeof(path), "C:/Users/%s", userName);

    while(1) {

        printf("[%s@%s]: %s> ", userName, compName, path);
        fgets(usrCommand, sizeof(usrCommand), stdin);
        usrCommand[strcspn(usrCommand, "\n")] = 0;

        if (strncmp(usrCommand, "cd ", 3) == 0) {
            char *newPath = usrCommand + 3;
            if (chdir(newPath) == 0) {
                snprintf(path, sizeof(path), "%s", newPath);
            }
            else {
                printf("Directory %s not found", newPath);
            }
        }

        else if (strncmp(usrCommand, "echo ", 5) == 0) {
            echo(usrCommand + 5);
            mainFunc();
        }
        else if (strcmp(usrCommand, "clear") == 0) {
            clear();
            mainFunc();
        }
        else if (strncmp(usrCommand, "touch ", 5) == 0) {
            char *fileName = usrCommand + 5;
            touch(fileName);
        }
        else if (strcmp(usrCommand, "ls") == 0) {
            ls(path);
        }
        else if (strcmp(usrCommand, "exit") == 0) {
           break;
        }
        else if (strcmp(usrCommand, "help") == 0) {
            helpList();
        }
        else {
            commandError(usrCommand);
            printf("");
            mainFunc();
        }
    }
}
