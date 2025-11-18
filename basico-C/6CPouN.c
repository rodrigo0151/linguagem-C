/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int x1;
    printf("\n digite o primeiro numero");
    scanf("%d",&x1);
    if(x1>0)
    {
        printf("\n o numero %d é maior que zero");
    }
    if(x1<0)
    {
        printf("\n o numero %d é menor que zero");
    }
    if(x1==0)
    {
        printf("\n o numero %d é igual a zero");
    }
    
}