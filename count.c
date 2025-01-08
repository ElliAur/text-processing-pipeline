// count.c
// This program counts characters, whitespaces, words, and lines in the input text.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int ch;
    int charCount = 0;
    int whiteSpaceCount = 0;
    int wordCount = 0;
    int lineCount = 0;
    int inWord = 0;

    while ((ch = getchar()) != EOF) {
        if (ferror(stdin)) {
            perror("Error reading input");
            exit(EXIT_FAILURE);
        }
        charCount++;
        if (isspace(ch)) {
            whiteSpaceCount++;
            if (ch == '\n') {
                lineCount++;
            }
            inWord = 0;
        } else {
            if (!inWord) {
                wordCount++;
                inWord = 1;
            }
        }
    }

    if (ferror(stdout)) {
        perror("Error writing output");
        exit(EXIT_FAILURE);
    }

    printf("Characters: %d\n", charCount);
    printf("Whitespaces: %d\n", whiteSpaceCount);
    printf("Words: %d\n", wordCount);
    printf("Lines: %d\n", lineCount);

    return 0;
}
