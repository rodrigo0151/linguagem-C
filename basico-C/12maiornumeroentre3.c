/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int x1,x2,x3;
    printf("\n Digite o primeiro número");
    scanf("%d",&x1);
    printf("\n Digite o segundo número ");
    scanf("%d",&x2);
    printf("\n Digite o terceiro número");
    scanf("%d",&x3);
    if (x1>x2 && x1>x3)
{
    printf("\n O maior numero é %d",x1);
}
else if (x2>x1 && x2>x3)
{
    printf("\n O maior numero é %d",x2);
}
else
{
    printf("\n O maior numero é %d",x3);
}
    return 0;
}