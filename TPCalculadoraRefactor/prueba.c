#include <stdio.h>
#include "Scanner.h"

int main (){

    char array[100] = {' ','5','.','5',' ','8','9','.','3',' ', '+', '\0'};
    int indexString = 0;
    float fBuffer[2];
    int indexBuffer = 0;
    char cIngreso;
    int c;

    printf("Ingrese un caracter\n");
    indexString++;

    array[0] = cIngreso;

    c = GetNextToken(array,fBuffer,&indexString,&indexBuffer);
    while (c != 3){
        indexString++;
        c = GetNextToken(array,fBuffer,&indexString,&indexBuffer);
    };

    printf("Buffer 1 %4.8f \n",fBuffer[0]);
    printf("Buffer 2 %4.8f \n",fBuffer[1]);
    printf("Ultimo token %c",array[indexString-1]);

    return 0;
}