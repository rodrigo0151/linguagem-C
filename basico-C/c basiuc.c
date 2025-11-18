/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    float x1, x2, soma,media;
    soma=0;
    media=0;
    printf ("\n digite o primeiro número :");
    scanf("%f",&x1);
    if(x1>0)
    {
        printf("\n O numero %f maior que zero",x1);
    }
    if(x1==0)
    {
    printf("\n O numero %f igual a zero",x1);
    }
    if(x1<0)
    {
        printf("\n O numero %f igual a zero",x1);
    }
    printf ("\n digite o segundo número :");
    scanf("%f",&x2);
    soma=x1+x2;
    media=soma/2;
    printf("\n O valor da soma foi:%.2f",soma);
    printf("\n O valor da media foi:%.2f",media);
}