/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
2. Escreva um programa que mostre o número e o seu quadrado de 1 até 10.
Exemplo:
1² = 1
2² = 4
3² = 9 …
*/

#include <stdio.h>

int main(void) {
 int numero, quadrado;
 for (numero = 1; numero <= 10; numero++) {
 quadrado = numero * numero;
 printf("%d^2 = %d\n", numero, quadrado);
 }
 return 0;
}

