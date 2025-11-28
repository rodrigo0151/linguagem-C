/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
5. Faça um programa em C que receba 5 números e informe a soma e média dos 2 meores
*/

#include <stdio.h>

int main(void) {
 float numeros;
 float menor1, menor2;
 float soma, media;
 printf("Digite 5 numeros:\n");
 menor1 = 99999.0;
 menor2 = 99999.0;
 for (int i = 0; i < 5; i++) {
 scanf("%f", &numeros[i]);
 if (numeros[i] < menor1) {
 menor2 = menor1;
 menor1 = numeros[i];
 } else if (numeros[i] < menor2) {
 menor2 = numeros[i];
 }
 }
 soma = menor1 + menor2;
 media = soma / 2.0;
 printf("\nO primeiro menor numero e: %.2f\n", menor1);
 printf("O segundo menor numero e: %.2f\n", menor2);
 printf("A soma dos dois menores numeros e: %.2f\n", soma);
 printf("A media dos dois menores numeros e: %.2f\n", media);
 return 0;
}