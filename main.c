#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void process_input(const char *input) {
    char buf[16];
    snprintf(buf, sizeof(buf), "%s", input);
    printf("Processed: %s\n", buf);
}

char *duplicate_input(const char *input) {
    char *copy = malloc(strlen(input) + 1);
    strcpy(copy, input);
    free(copy);
    return copy;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }
    process_input(argv[1]);
    char *dup = duplicate_input(argv[1]);
    printf("Duplicated: %s\n", dup);
    return 0;
}
