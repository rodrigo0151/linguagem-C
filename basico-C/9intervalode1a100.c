/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>  
int main(void) {
    int x1;
    printf("\nDigite um numero: ");
    scanf("%d", &x1);
    
    if (x1 > 0 && x1 < 101) 
        printf("\nO numero esta no intervalo de 1 a 100\n");
    if (x1 < 0 && x1 > 101);
        printf("\n O numero não está no intervalo de 1 a 100");
    }
