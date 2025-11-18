/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main(void) {
    int x1, x2, x3;
    int maior, meio, menor;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x1);

    printf("Digite o segundo numero: ");
    scanf("%d", &x2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &x3);

    // Encontrando o menor, o do meio e o maior número
    if (x1 >= x2 && x1 >= x3) {
        maior = x1;
        if (x2 >= x3) {
            meio = x2;
            menor = x3;
        } else {
            meio = x3;
            menor = x2;
        }
    } else if (x2 >= x1 && x2 >= x3) {
        maior = x2;
        if (x1 >= x3) {
            meio = x1;
            menor = x3;
        } else {
            meio = x3;
            menor = x1;
        }
    } else { // x3 eh o maior
        maior = x3;
        if (x1 >= x2) {
            meio = x1;
            menor = x2;
        } else {
            meio = x2;
            menor = x1;
        }
    }

    // Exibindo os resultados
    printf("\nOrdem crescente: %d, %d, %d\n", menor, meio, maior);
    printf("Ordem decrescente: %d, %d, %d\n", maior, meio, menor);

    return 0;
}
