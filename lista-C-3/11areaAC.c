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
float ac; 
ac=0; 

    for (i=0; i<1; i++) 
    { 
        printf("\n Digite o raio do circulo na posicao %d :", i); 
        scanf("%d", &n[i]);	 
    } 

    for (i=0; i<1; i++) 
    { 
        ac= 3.14* (n[i] * n[i]); 

        printf("\n A area do circulo na posicao %d, eh : %.2f", i, ac); 

    } 
    return 0;
}
