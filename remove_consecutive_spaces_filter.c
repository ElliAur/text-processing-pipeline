// remove_consecutive_spaces_filter.c
// This filter removes consecutive whitespace characters from the input text
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int ch;
    int prevChar = 0;

    while ((ch = getchar()) != EOF) {
        if (ferror(stdin)) {
            perror("Error reading input");
            exit(EXIT_FAILURE);
        }
        if (isspace(ch)) {
            if (!isspace(prevChar)) {
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
