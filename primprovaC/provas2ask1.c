/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
1. Faça um algoritmo em linguagem C que receba 5 números e informe:
a) O maior número e qual posição foi digitado
b) O menor número e qual posição foi digitado
c) Calcule quantas vezes o número “menor” é menor que o outro “maior”.
*/

#include <stdio.h>


int main() { int numeros; int maior, menor; int pos_maior, pos_menor; int count_menor_que_maior;
printf("Digite 5 numeros:\n");
for (int i = 0; i < 5; i++) {
 scanf("%d", &numeros[i]);
}
maior = numeros;
menor = numeros;
pos_maior = 0;
pos_menor = 0;
for (int i = 1; i < 5; i++) {
 if (numeros[i] > maior) {
 maior = numeros[i];
 pos_maior = i;
 }
 if (numeros[i] < menor) {
 menor = numeros[i];
 pos_menor = i;
 }
}
if (menor < maior) {
 count_menor_que_maior = 1;
} else {
 count_menor_que_maior = 0;
}
printf("O maior numero e: %d (Posicao %d)\n", maior, pos_maior + 1);
printf("O menor numero e: %d (Posicao %d)\n", menor, pos_menor + 1);
Sistemas de Informação
Programação de computadores – Avaliação 2
Aluno(a):_Rodrigo Pereira Silva__ Turma: _quarta____
printf("O numero menor e menor que o numero maior %d vez(es).\n", count_menor_que_maior);
return 0;
}

