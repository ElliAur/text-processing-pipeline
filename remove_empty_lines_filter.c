// remove_empty_lines_filter.c
// This filter removes empty lines from the input text
#include <stdio.h>
#include <stdlib.h>

int main() {
    int ch;
    int prevChar = '\n';

    while ((ch = getchar()) != EOF) {
        if (ferror(stdin)) {
            perror("Error reading input");
            exit(EXIT_FAILURE);
        }
        if (ch == '\n') {
            if (prevChar != '\n') {
                putchar(ch);
            }
        } else {
            putchar(ch);
        }
        prevChar = ch;
    }

    if (ferror(stdout)) {
        perror("Error writing output");
        exit(EXIT_FAILURE);
    }

    return 0;
}
