/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void) {
    int N;        // número de bandejas
    int L, C;     // latas e copos
    int quebrados = 0;  // total de copos quebrados

    printf("Digite o número de bandejas: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Digite o número de latas e copos da bandeja %d: ", i + 1);
        scanf("%d %d", &L, &C);

        if (L > C) {
            quebrados += C;  // soma os copos quebrados
        }
    }

    printf("Total de copos quebrados: %d\n", quebrados);

    return 0;
}
