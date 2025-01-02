#include <stdio.h>
#include <windows.h>
#include "registry.h"

int setDefault(char *path) {
    const char *subKey = "Software\\UnixMode";
    const char *valueName = "DefaultEntryPath";

    HKEY hKey;
    LONG creation;

    creation = RegCreateKeyEx (
        HKEY_CURRENT_USER,
        subKey,
        0,
        NULL,
        REG_OPTION_NON_VOLATILE,
        KEY_WRITE,
        NULL,
        &hKey,
        NULL
    );

    if (creation != ERROR_SUCCESS) {
        printf("Error creating key");
        return 1;
    }

    creation = RegSetValueEx(
        hKey,
        valueName,
        0,
        REG_SZ,
        (const BYTE *)path, 
        (DWORD)(strlen(path) + 1)
    );

    if (creation != ERROR_SUCCESS) {
        printf("Error creating key");
        return 1;
    }

    RegCloseKey(hKey);
    printf("Set Default path successfully\n\n");
    return 0;
}
