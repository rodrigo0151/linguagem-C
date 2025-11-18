/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int n[3],media,soma;
    int i;
    soma=0;
    media=0;
    for (i=0; i<3; i++)
    {
        printf("\n Digite o numero na posição %d ", i);
        scanf("%d", &n[i]);
        soma=soma+n[i];
    }
    media=soma/3;
    for (i=0; i<3; i++)
    {
        printf("\n A soma foi %d ", soma);
    }
    for (i=0; i<3; i++)
    {
        printf("\n A media foi %d ", media);
    }
    
    return 0;
}
