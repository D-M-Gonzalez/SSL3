#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include "Scanner.h"

int GetNextToken(char array[],float fBuffer[],int *indexString, int *indexBuffer){
    char token = array[*indexString];
    int rValue;

    int iType = TokenType(token);

    if (iType == 1){
        rValue = 1;
        indexBuffer = 0;
    };
    if (iType == 0){
        rValue = 0;
        fBuffer[*indexBuffer] = parseFloat(array,&*indexString);
        *indexBuffer = *indexBuffer + 1;
    };
    if (iType == 2){
        rValue = 2;
    };
    if (iType == 3){
        rValue = 3;
    };

    return rValue;
}

int TokenType(char token){
    bool bProcess = true;
    int iType = 0;
    char sOp[10] = {'+','-','*','/','e','^'};
    char sEsp = ' ';

    if (bProcess == true && !isdigit(token)){
        for (int i = 0; i<6; i++){
            if (token == sOp[i]){
                bProcess = false;
                iType = 1; //Es un operando
            }
        }
        if (bProcess == true && token == ' '){
            iType = 2; //Es un espacio
            bProcess = false;
        } else if (bProcess == true && token == '\0'){
            iType = 3; //Es EOF
            bProcess = false;
        }
    } 
    if (bProcess == true && isdigit(token)){
        iType = 0; //Es un número
        bProcess = false;
    }

    return iType;
}

float parseFloat(char array[],int *indexString){
    float value = atof(&array[*indexString]);
    char token = array[*indexString];

    while (token != ' '){
        token = array[*indexString];
        *indexString = *indexString + 1;
    };

    return value;
}