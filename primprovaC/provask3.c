/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int n;
    
        printf("\n Digite um numero ");
        scanf("%d", &n);
        
        while ((n < 10 )|| (n > 99))
    {
        printf("\n Digite um numero de dois digitos");
        scanf("%d", &n);
    }
    
    
   
      if (n == 11 || n == 22 || n == 33 || n == 44 || n == 55 || n == 66 || n == 77 || n == 88 || n == 99)      //if ((n / 10) == (n % 10)) OUTRO JEITO MAIS SIMPLES DE FAZER//
    {
        printf("\n Este numero (%d) eh palíndromo .", n);
    }
    else
    {
        printf("\n Este numero (%d) nao eh palíndromo.", n);
    }
	   
    
    
}