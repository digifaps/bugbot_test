#include <stdio.h>
#include <string.h>

void process_input(const char *input) {
    char buf[16];
    strcpy(buf, input);
    printf("Processed: %s\n", buf);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }
    process_input(argv[1]);
    return 0;
}
