/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n[5], maior, smaior;
    float media, soma;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("\n Digite um numero na posicao %d : ", i);
        scanf("%d", &n[i]);
    }

    if (n[0] > n[1]) {
        maior = n[0];
        smaior = n[1];
    } else {
        maior = n[1];
        smaior = n[0];
    }

    for (i = 2; i < 5; i++)
    {
        if (n[i] > maior) {
            smaior = maior;
            maior = n[i];
        }
        else if (n[i] > smaior) {
            smaior = n[i];
        }
    }
    
    soma=0;
    media=0;
    
    soma=maior+smaior;
    media=soma/2;
    
    printf("\n Maior numero digitado: %d", maior);
    printf("\n Segundo maior numero digitado: %d", smaior);
    printf("\n A soma dos dois maiores eh : %.2f", soma);
    printf("\n A media eh: %.2f", media);
    

    return 0;
}