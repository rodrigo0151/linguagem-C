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
    int n[5], maior, menor, divs;
    int i;
    
    
    for (i=0; i<5; i++)
    {
        printf("\n Digite um numero ", i);
        scanf("%d", &n[i]);
    }
    
    maior=n[0];
    menor=n[0];
    
     for (i=0; i<5; i++)
     {
        if (n[i] > maior)
        {
            maior = n[i];
        }

        if (n[i] < menor)
        {
            menor = n[i];
        }
    }
    
    divs=maior/menor;
    

    printf("\n Maior número digitado: %d", maior);
    printf("\n Menor número digitado: %d", menor);
    printf("\n A diferenca de ambos numeros eh: %d", divs);
 
 
 	
  return 0;
}