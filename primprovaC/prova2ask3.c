/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
3. Peça ao usuário um número inteiro e exiba o número invertido (exemplo: 1234 
→4321).
*/

#include <stdio.h>

int main(void) { int numero_original, numero_invertido = 0, digito; int temp;
printf("Digite um numero inteiro: ");
scanf("%d", &numero_original);
temp = numero_original;
while (temp != 0) {
 digito = temp % 10;
 numero_invertido = numero_invertido * 10 + digito;
 temp /= 10;
}
printf("O numero original (%d) invertido e: %d\n", numero_original, numero_invertido);
return 0;
}

