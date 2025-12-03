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
    int i, j, k;      // j->posicao dentro das cartelas, comparar  k->cartelas  i->numero sorteado
    int sorteio[10];
    int cartelas[500][10];
    int total[500] = {0};

    srand(time(NULL));

    // Gera números do sorteio
    for (i = 0; i < 10; i++) {
        sorteio[i] = rand() % 20;
    }

    // Gera números das cartelas
    for (k = 0; k < 500; k++) {
        for (i = 0; i < 10; i++) {
            cartelas[k][i] = rand() % 20;
        }
    }

    // Mostra sorteio
    printf("\nSorteio: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", sorteio[i]);
    }

    // Mostra todas as cartelas
    for (k = 0; k < 500; k++) {
        printf("\nCartela %d: ", k + 1);
        for (i = 0; i < 10; i++) {
            printf("%d ", cartelas[k][i]);
        }
    }

    // Verifica acertos
    for (k = 0; k < 500; k++) {
        for (i = 0; i < 10; i++) {
            for (j = 0; j < 10; j++) {
                if (sorteio[i] == cartelas[k][j]) {
                    total[k]++;
                    printf("\nNúmero %d sorteado (pos %d) está na cartela %d (pos %d)",
                           sorteio[i], i, k + 1, j);
                    break; //impede de contar duas vezes o msm numero
                }
            }
        }
    }

    #define TOPN 5  // define muda a quantidade da variavel

int top_idx[TOPN];
int low_idx[TOPN];

// Inicializa listas com as primeiras cartelas
for (i = 0; i < TOPN; i++) {
    top_idx[i] = i;
    low_idx[i] = i;
}

// Percorre todas as cartelas
for (k = 0; k < 500; k++) {

    // ---------- TOP N MAIORES ----------
    for (i = 0; i < TOPN; i++) {
        if (total[k] > total[top_idx[i]]) {

            // empurra elementos para trás
            for (j = TOPN - 1; j > i; j--) {
                top_idx[j] = top_idx[j - 1];
            }

            top_idx[i] = k;
            break;
        }
    }

    // ---------- TOP N MENORES ----------
    for (i = 0; i < TOPN; i++) {
        if (total[k] < total[low_idx[i]]) {

            for (j = TOPN - 1; j > i; j--) {
                low_idx[j] = low_idx[j - 1];
            }

            low_idx[i] = k;
            break;  //impede de contar duas vezes o msm numero
        }
    }
}

// --------------------------------
// MOSTRAR RESULTADOS
// --------------------------------

printf("\n\nTOP %d CARTELAS COM MAIS ACERTOS:", TOPN);
for (i = 0; i < TOPN; i++) {
    k = top_idx[i];
    printf("\nCartela %d (acertos: %d): ", k + 1, total[k]);
    for (j = 0; j < 10; j++) printf("%d ", cartelas[k][j]);
}

printf("\n\nTOP %d CARTELAS COM MENOS ACERTOS:", TOPN);
for (i = 0; i < TOPN; i++) {
    k = low_idx[i];
    printf("\nCartela %d (acertos: %d): ", k + 1, total[k]);
    for (j = 0; j < 10; j++) printf("%d ", cartelas[k][j]);
}

    return 0;
}
