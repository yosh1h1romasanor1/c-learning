#include <stdio.h>

int main() {
    int c, nl; //variable declaration for character input and line count 

    nl = 0;
    while ((c = getchar()) != EOF) { //input character by character until EOF
        if (c == '\n') { //if the character is a newline, increment the line count
            ++nl; //increment line count
        }
    }
    printf("%d\n", nl);
}