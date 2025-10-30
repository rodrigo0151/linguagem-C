/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
   int n;
   printf("\n Digite um numero negativo");
   scanf("%d", &n);
   if (n>0)
   printf("\n esse numero eh positivo");
   while (n<0)
   {
        printf("\n Digite um numero positvo");
        scanf("%d", &n);
   }

    return 0;
}