/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h> 
int main(void)
{
    int x1, x2 ;
    printf ("\n Digite o primeiro número : ");
    scanf ("%d" , &x1);
    printf ("\n Digite o segundo número : ");
    scanf ("%d" , &x2);
    if (x1>x2)
    {
        printf ("\n O valor :%d é menor ", x2); 
    }
    if (x1<x2)
    {
        printf ("\n O valor :%d é menor ", x1);
    }
    if (x1==x2)
        printf ("\n Os valores :%d e %d são iguais", x1,x2 );
    }
