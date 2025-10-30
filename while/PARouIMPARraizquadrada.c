/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main(void)
{
   int num, raiz;
   
   printf("\n Digite o valor do numero ");
   scanf("%d", &num);
   
   raiz=sqrt(num);              //função da raiz quadrada//
   
   
   if (num%2==0)                //%2 eh para dividir ate dar 0//
        printf("\n o numero foi par");
        
        
    if (num%2==1)               //dividir para dar 1, %2!(comando pra diferente)//
        printf("\n o numero foi impar");
        
        
        printf("\n A raiz foi %d ", raiz);
    return 0;
}