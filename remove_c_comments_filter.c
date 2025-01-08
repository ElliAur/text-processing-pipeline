// remove_c_comments_filter.c
// This filter removes C-style 'block comments'
#include <stdio.h>
#include <stdlib.h>

int main() {
    int ch;
    int prevChar = 0;
    int inComment = 0;

    while ((ch = getchar()) != EOF) {
        if (ferror(stdin)) {
            perror("Error reading input");
            exit(EXIT_FAILURE);
        }
        if (inComment) {
            if (prevChar == '*' && ch == '/') {
                inComment = 0;
                prevChar = 0;
            } else {
                prevChar = ch;
            }
        } else {
            if (prevChar == '/' && ch == '*') {
                inComment = 1;
                prevChar = 0;
            } else {
                if (prevChar != 0) {
                    putchar(prevChar);
                }
                prevChar = ch;
            }
        }
    }

    if (prevChar != 0 && !inComment) {
        putchar(prevChar);
    }

    if (ferror(stdout)) {
        perror("Error writing output");
        exit(EXIT_FAILURE);
    }

    return 0;
}
