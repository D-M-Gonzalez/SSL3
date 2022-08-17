#define BUFSIZE 100
#include "char.h"
#include <stdio.h>

char buffer[BUFSIZE]; /* buffer for ungetch */
int bufferPosition = 0; /* next free position in buf */

/* get a (possibly pushed-back) character */
int getch(void){
    return (bufferPosition > 0) ? buffer[--bufferPosition] : getchar();
}

/* push character back on input */
void ungetch(int c){
    if (bufferPosition >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buffer[bufferPosition++] = c;
} 