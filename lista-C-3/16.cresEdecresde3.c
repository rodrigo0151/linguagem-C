/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int n[3], maior, meio, menor;
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Digite o numero na posicao %d: ", i);
        scanf("%d", &n[i]);
    }


    if (n[0] > n[1] && n[0] > n[2])
    {
        maior = n[0];
        if (n[1] > n[2])
        {
            meio = n[1];
            menor = n[2];
        }
        else
        {
            meio = n[2];
            menor = n[1];
        }
    }
    else if (n[1] > n[0] && n[1] > n[2])
    {
        maior = n[1];
        if (n[0] > n[2])
        {
            meio = n[0];
            menor = n[2];
        }
        else
        {
            meio = n[2];
            menor = n[0];
        }
    }
    else
    {
        maior = n[2];
        if (n[0] > n[1])
        {
            meio = n[0];
            menor = n[1];
        }
        else
        {
            meio = n[1];
            menor = n[0];
        }
    }

    printf("\nOrdem crescente: %d  %d  %d", menor, meio, maior);
    printf("\nOrdem decrescente: %d  %d  %d\n", maior, meio, menor);

    return 0;
}
