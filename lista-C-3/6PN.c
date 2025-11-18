/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int n[1];
    int i;
    for (i=0; i<1; i++)
    {
        printf("\n Digite o numero na posição %d ", i);
        scanf("%d", &n[i]);
    }
    for (i=0; i<1; i++)
    {
        if (n[i]>0)
        {
            printf("\nEsse numero eh positivo %d ", n[i]);
        }
        else if (n[i]<0)
        {
            printf("\n Esse numero eh negativo %d ", n[i]);
        }
        else if (n[i]==0)
        {
            printf("\n Esse numero eh nulo %d ", n[i]);
        }
    }
    
    
    return 0;
}
