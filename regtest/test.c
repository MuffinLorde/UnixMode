#include <windows.h>
#include <stdio.h>

int saveToRegistry(const char *subKey, const char *valueName, const char *path) {
    HKEY hKey;
    LONG result;

    // Create or open the registry key
    result = RegCreateKeyEx(
        HKEY_CURRENT_USER,  // Root key
        subKey,             // Subkey path
        0,                  // Reserved (always 0)
        NULL,               // Class (not used, set to NULL)
        REG_OPTION_NON_VOLATILE, // Key persistence
        KEY_WRITE,          // Desired access
        NULL,               // Security attributes
        &hKey,              // Handle to opened/created key
        NULL                // Disposition (optional, set to NULL if not needed)
    );

    if (result != ERROR_SUCCESS) {
        printf("Error opening/creating registry key: %ld\n", result);
        return 1;
    }

    // Set the value
    result = RegSetValueEx(
        hKey,               // Handle to key
        valueName,          // Value name
        0,                  // Reserved (always 0)
        REG_SZ,             // Value type (string)
        (const BYTE *)path, // Value data
        (DWORD)(strlen(path) + 1) // Size of data including null terminator
    );

    if (result != ERROR_SUCCESS) {
        printf("Error setting registry value: %ld\n", result);
        RegCloseKey(hKey);
        return 1;
    }

    // Close the key
    RegCloseKey(hKey);

    printf("Path saved to registry successfully.\n");
    return 0;
}

int main() {
    const char *subKey = "Software\\MyTerminalEmulator";
    const char *valueName = "DefaultPath";
    const char *path = "C:\\Users\\Example\\Documents";

    if (saveToRegistry(subKey, valueName, path) == 0) {
        printf("Success!\n");
    } else {
        printf("Failed to save to registry.\n");
    }

    return 0;
}
