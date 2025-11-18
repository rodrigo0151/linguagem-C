/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
   int n[2];
   int i;
   
   for(i=0; i<2; i++)
{
    printf("\n Digite o numero na posição %d ", i);
    scanf("%d", &n[i]);
}
if (n[0] > n[1]) { 

        printf("\n O numero que esta na posicao 1 eh o menor: %d ", n[1]); 

    }  

    else if (n[1] > n[0]) { 

        printf("\n O numero que esta na posicao 0 eh o menor: %d ", n[0]); 

    }  

    else { 

        printf("\n Os numeros sao iguais."); 

    } 

 

    return 0; 

} 
  