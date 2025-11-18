/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
    int i, j, k;
    int sorteio[10];
    int cartelas[3][10]; // 3 cartelas, cada uma com 10 números
    int total[3] = {0};  // contador de acertos de cada cartela

    srand(time(NULL));

    // Gera números aleatórios para sorteio
    for (i = 0; i < 10; i++) {
        sorteio[i] = rand() % 20;
    }

    // Gera números aleatórios para todas as cartelas
    for (k = 0; k < 3; k++) {          // 3 cartelas
        for (i = 0; i < 10; i++) {     // 10 números por cartela
            cartelas[k][i] = rand() % 20;
        }
    }

    // Mostra sorteio
    printf("\nSorteio: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", sorteio[i]);
    }

    // Mostra todas as cartelas
    for (k = 0; k < 3; k++) {
        printf("\nCartela %d: ", k + 1);
        for (i = 0; i < 10; i++) {
            printf("%d ", cartelas[k][i]);
        }
    }

    // Verifica acertos
    for (i = 0; i < 10; i++) {          // cada número sorteado
        for (k = 0; k < 3; k++) {      // cada cartela
            for (j = 0; j < 10; j++) { // cada número da cartela
                if (sorteio[i] == cartelas[k][j]) {
                    printf("\nNúmero %d sorteado (pos %d) está na cartela %d (pos %d)",
                           sorteio[i], i, k + 1, j);
                    total[k]++;
                }
            }
        }
    }

    // Mostra total de acertos
    for (k = 0; k < 3; k++) {
        printf("\nTotal de acertos da cartela %d: %d", k + 1, total[k]);
    }

    return 0;
}