/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int x1 ,x2 ,x3,media,soma;
    soma=0;
    media=0;
    printf("\n digite o primeiro numero");
    scanf("%d",&x1);
    printf("\n digite o segundo numero");
    scanf("%d",&x2);
    printf("\n digite o terceiro numero");
    scanf("%d",&x3);
    soma=(x1+x2+x3);
    media=soma/3;
    printf("\n A media foi:%d",media);
}