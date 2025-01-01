#include <windows.h>

void getUserName(char* userName, size_t size) {
    DWORD len = size;
    if (GetUserNameA(userName, &len) == 0) {
        strcpy(userName, "Unknown User");
    }
}

void getCompName(char* compName, size_t size) {
    DWORD len = (DWORD)size;
    if (GetComputerNameA(compName, &len) == 0) {
        strcpy(compName, "Unknown Computer");
    }
}
