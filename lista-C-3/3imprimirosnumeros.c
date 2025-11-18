/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int n[2];
    int i;
    for (i=0;i<2;i++)
    {
        printf("\n Digite o primeiro número %d :", i);
        scanf("%d",&n[i]);
    }
    
    printf("\n Os numeros foram %d e %d", n[0], n[1]);
}
