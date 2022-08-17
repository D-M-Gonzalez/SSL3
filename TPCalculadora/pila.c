#define MAXVAL 100 /* maximum depth of val stack */
#include "pila.h"
#include <stdio.h>

int stackPosition = 0; /* next free stack position */
double stringArray[MAXVAL]; /* value stack */

/* push: push f onto value stack */
void push(double value){
    if (stackPosition < MAXVAL)
        stringArray[stackPosition++] = value;
    else
        printf("error: stack full, can't push %g\n", value);
}

 /* pop: pop and return top value from stack */
double pop(void){
    if (stackPosition > 0)
        return stringArray[--stackPosition];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
} 