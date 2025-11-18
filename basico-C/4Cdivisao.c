/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float x1,x2,divs;
    divs=0;
    printf("\n digite o primeiro número:");
    scanf("%f",&x1);
    printf("\n digite o segundo número");
    scanf("%f",&x2);
    divs=x1/x2;
    printf("\n o valor de foi:%.2f",divs);
    
}