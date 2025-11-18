/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int n[10], pos, neg, nulo;
    int i;
    pos=0;
    neg=0;
    nulo=0;
    
    for (i=0; i<10; i++)
    {
        printf("\n Digite o numero na posição %d ", i);
        scanf("%d", &n[i]);
    }
    for (i=0; i<10; i++)
    {
        if (n[i]>0)
        {
            pos= pos +1;
        }
        else if (n[i] < 0) 
        { 
            neg= neg +1; 
        } 
        else if (n[i] == 0)
        {
            nulo= nulo +1;
        }

    } 

 

printf("\n A quantidade de positivos eh  : %d", pos); 

printf("\n A quantidade de negativos eh : %d", neg); 

printf("\n A quantidade de numeros nulos eh : %d", nulo); 
    
    return 0;
}
