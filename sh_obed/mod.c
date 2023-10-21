#include "main.h"

int mod(int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: %s <script_file>\n", argv[0]);
        return 1;
    }

    FILE *script_file = fopen(argv[1], "r");
    if (!script_file) {
        perror("Error opening script file");
        return 1;
    }

    fclose(script_file);

    return 0;
}
