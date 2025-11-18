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
    
    for (i=0; i<1; i++ )
    {
        printf("\n Digite o numero da posição %d ", i);
        scanf("%d", &n[i]);
    }
    
    if (n[0] < 101 && n[0] >= 1)
    {
        printf("\n Esse numero esta no intervalo de 1 a 100 :%d ", n[0]);
    }
    else 
    {
        printf("\n Esse numero nao esta dentro do intervalo de 1 a 100 :%d ", n[0]);
    }
    
    return 0;
}
