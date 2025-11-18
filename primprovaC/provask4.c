/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n[10];
    int i;
    int maior, menor;
    float porcentagem;

    menor = 0;
    maior = 0;

    for (i = 0; i < 10; i++) 
    {
        printf("\n Digite as idades na posicao %d : ", i);
        scanf("%d", &n[i]);

        while (n[i] < 0 || n[i] > 100)
        {
            printf("\n Idade Invalida, digite novamente %d :", i);
            scanf("%d", &n[i]);
        }
    }

    for (i = 0; i < 10; i++)
    {
        if (n[i] < 18)
            menor = menor + 1;

        if (n[i] > 18)
            maior = maior + 1;
    }

    porcentagem = (maior / 10.0) * 100;

    printf("\n A quantidade de pessoas maiores de 18 eh : %d", maior);
    printf("\n A quantidade de pessoas menores de 18 eh : %d", menor);
    printf("\n O percentual de pessoas maiores que 18 eh : %.2f%%", porcentagem);

    return 0;
}
