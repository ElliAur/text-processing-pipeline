// remove_one_space_filter.c
// This filter removes all whitespace characters from the input text
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int ch;

    while ((ch = getchar()) != EOF) {
        if (ferror(stdin)) {
            perror("Error reading input");
            exit(EXIT_FAILURE);
        }
        if (!isspace(ch)) {
            putchar(ch);
        }
    }

    if (ferror(stdout)) {
        perror("Error writing output");
        exit(EXIT_FAILURE);
    }

    return 0;
}
