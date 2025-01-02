//File-manage includes the code for the commands needed to create, delete (WIP) and list different files and folders (WIP) on the system
//Connected to "file-manage.h" (custom header file)

#include <stdio.h>
#include <dirent.h>
#include "file-manage.h"

//Touch is used to create files on the system
void touch(char fileName[128]) {
    FILE *fptr;
    fptr = fopen(fileName, "w");
    fclose(fptr);
    //Simply asks c to open a file that doesn't exist which prompts it to create the file and then closes the file
}

//LS id used to list the different files (WIP) and folders is the current folder
void ls(char path[256]) {
    DIR *d;
    struct dirent *dir;
    d = opendir(path);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            printf("%s\n", dir->d_name);
        }
        closedir(d);
        //basically asks if the struct of d was able to be opened and if so lists the folders and files line by line
        //Will have a table for it soon
    } else {
        printf("Cannot open directory %s\n", path);
    }
}

/* void cp(char source[256], char destination[256]) {

} */
