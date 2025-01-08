// remove_trailing_spaces_filter.c
// This filter removes trailing spaces from each line in the input text
#include <stdio.h>
#include <stdlib.h>

int main() {
    int ch;
    int prevChar = 0;
    int trailingSpaces = 0;

    while ((ch = getchar()) != EOF) {
        if (ferror(stdin)) {
            perror("Error reading input");
            exit(EXIT_FAILURE);
        }
        if (ch == ' ') {
            trailingSpaces++;
        } else {
            if (ch == '\n') {
                trailingSpaces = 0;
            } else {
                while (trailingSpaces > 0) {
                    putchar(' ');
                    trailingSpaces--;
                }
            }
            putchar(ch);
        }
    }

    if (ferror(stdout)) {
        perror("Error writing output");
        exit(EXIT_FAILURE);
    }

    return 0;
}
