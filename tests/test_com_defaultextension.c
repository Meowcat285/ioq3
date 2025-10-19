#include "../code/qcommon/q_shared.h"
#include <stdio.h>
#include <string.h>

int main(void) {
    char path[128];

    // Test with a path that has no extension
    strcpy(path, "test");
    COM_DefaultExtension(path, sizeof(path), ".foo");
    if (strcmp(path, "test.foo") != 0) {
        printf("Failed: test -> test.foo\n");
        return 1;
    }

    // Test with a path that already has an extension
    strcpy(path, "test.bar");
    COM_DefaultExtension(path, sizeof(path), ".foo");
    if (strcmp(path, "test.bar") != 0) {
        printf("Failed: test.bar -> test.bar\n");
        return 1;
    }

    // Test with a path that contains a dot but no extension
    strcpy(path, "test.dir/test");
    COM_DefaultExtension(path, sizeof(path), ".foo");
    if (strcmp(path, "test.dir/test.foo") != 0) {
        printf("Failed: test.dir/test -> test.dir/test.foo\n");
        return 1;
    }

    return 0;
}
