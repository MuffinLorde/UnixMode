#ifndef FILE_MANAGE_H
#define FILE_MANAGE_H

int fixPath(char path[256]); //Sets all the slashes in the path to a forward slash (/)

void touch(char fileName[128]); //Creates files and folders (WIP)
void ls(char path[256]); //lists files (WIP) and folders on the current directory

#endif
