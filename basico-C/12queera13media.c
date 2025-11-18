/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int x1,x2,x3,x4,x5,soma,media;
    soma=0;
    media=0;
    printf("\n Digite o primeiro número");
    scanf("%d",&x1);
    printf("\n Digite o segundo número ");
    scanf("%d",&x2);
    printf("\n Digite o terceiro número");
    scanf("%d",&x3);
    printf("\n Digite o quarto numero");
    scanf("%d",&x4);
    printf("\n Digite o quinto numero");
    scanf("%d",&x5);
   soma=x1+x2+x3+x4+x5;
   media=soma/5;
   printf("\n O valor da soma foi %d",soma);
   printf("\n A media foi %d",media);
    return 0;
}