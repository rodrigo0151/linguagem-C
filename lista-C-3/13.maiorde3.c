/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
   int n[3], maior;
   int i;
   maior=0;
   
   for (i=0; i<3; i++)
   {
       printf("\n Digite o numero na posição %d: ", i);
       scanf("%d", &n[i]);
   }
   
maior=n[0];
   for (i=0; i<3; i++)
   {
       if (n[i]>maior)
       {
           maior=n[i];
       }
      
   }
   
   printf("\n Esse numero eh maior %d ", maior);
    
    return 0;
}