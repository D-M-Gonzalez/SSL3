#include <ctype.h>
#include <stdio.h>
#include "get.h"
#include "char.h"
#define NUMBER '0' /* signal that a number was found */

int getch(void);
void ungetch(int);

/* getop: get next character or numeric operand */
int getop(char stringArray[]){
    int pos, charValue;
    
    while ((stringArray[0] = charValue = getch()) == ' ' || charValue == '\t');
        stringArray[1] = '\0';
    if (!isdigit(charValue) && charValue != '.')
        return charValue; /* not a number */
    pos = 0;
    if (isdigit(charValue)) /* collect integer part */
        while (isdigit(stringArray[++pos] = charValue = getch()));
            if (charValue == '.') /* collect fraction part */ 
                while (isdigit(stringArray[++pos] = charValue = getch()));
                    stringArray[pos] = '\0';
                    if (charValue != EOF)
                        ungetch(charValue);
                    return NUMBER;
} 