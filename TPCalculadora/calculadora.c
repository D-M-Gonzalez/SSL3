#include <stdio.h>
#include <stdlib.h> /* for atof() */
#include "get.h"
#include "pila.h"
#define MAXOP 100 /* max size of operand or operator */
#define NUMBER '0' /* signal that a number was found */

int getop(char []);
void push(double);
double pop(void);
/* reverse Polish calculator */

int main(){
    int type;
    double secondOperator;
    char stringArray[MAXOP];

    while ((type = getop(stringArray)) != EOF) {
        switch (type) {
            case NUMBER:
                push(atof(stringArray));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                secondOperator = pop();
                push(pop() - secondOperator);
                break;
            case '/':
                secondOperator = pop();
                if (secondOperator != 0.0)
                push(pop() / secondOperator);
                else
                printf("error: zero divisor\n");
                break;
            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
                printf("error: unknown command %s\n", stringArray);
                break;
        }
    }
    return 0;
}

