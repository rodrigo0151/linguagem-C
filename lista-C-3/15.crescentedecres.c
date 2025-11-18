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
   
   for (i=0; i<2; i++)
   {
       printf("\n Digite o numero na posição %d: ", i);
       scanf("%d", &n[i]);
   }
   
   for (i=0; i<1; i++)
   {
       if (n[0] > n[1])
       {
           printf("\n A ordem crescente eh %d > %d ", n[1], n[0]);
       }
       else if (n[0] < n[1])
       {
           printf("\n A ordem crescente eh %d > %d ", n[0], n[1]);
       }
   }
   for (i=0; i<1; i++)
   {
       if (n[0] < n[1])
       {
           printf("\n A ordem decrescente eh %d > %d ", n[1], n[0]);
       }
       else if (n[0] > n[1])
       {
           printf("\n A ordem decrescente eh %d > %d ", n[0], n[1]);
       }
   }
   
   

    return 0;
}