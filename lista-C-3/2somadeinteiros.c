/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
   int n[2],soma;
   int i;
   soma=0;
   for (i=0; i<2; i++)
   {
       printf("\n Digite o numero na posição %d: ", i);
       scanf("%d",&n[i]);
   }
   for (i=0; i<2; i++)
    soma=soma+n[i];
    
  printf("\n A soma foi :%d", soma);
  
  
}