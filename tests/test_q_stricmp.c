#include "../code/qcommon/q_shared.h"
#include <stdio.h>

int main(void) {
    if (Q_stricmp("test", "test") != 0) {
        printf("Failed: test == test\n");
        return 1;
    }
    if (Q_stricmp("test", "TEST") != 0) {
        printf("Failed: test == TEST\n");
        return 1;
    }
    if (Q_stricmp("test", "test1") == 0) {
        printf("Failed: test != test1\n");
        return 1;
    }
    if (Q_stricmp("test", "tes") == 0) {
        printf("Failed: test != tes\n");
        return 1;
    }
    if (Q_stricmp("", "") != 0) {
        printf("Failed: '' == ''\n");
        return 1;
    }
    if (Q_stricmp("test", "") == 0) {
        printf("Failed: test != ''\n");
        return 1;
    }
    if (Q_stricmp("", "test") == 0) {
        printf("Failed: '' != test\n");
        return 1;
    }
    if (Q_stricmp("test-string", "test-string") != 0) {
        printf("Failed: test-string == test-string\n");
        return 1;
    }
    return 0;
}
