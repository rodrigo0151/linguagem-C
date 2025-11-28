/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
4. A prefeitura de uma cidade fez uma pesquisa com 10 pessoas, coletando dados sobre o salário.
A prefeitura deseja saber:
a) A média do salário dessas pessoas
b) O maior salário
c) A porcentagem de pessoas com salários até R$ 1500,00
*/


#include <stdio.h>

int main(void) { int total_pessoas = 10; float salario; float soma_salarios = 0; float maior_salario = 0; int contador_ate_1500 =
0; float media_salarios, percentual_ate_1500;
printf("Digite o salario de 10 pessoas:\n");
for (int i = 1; i <= total_pessoas; i++) {
 printf("Salario da pessoa %d: R$ ", i);
 scanf("%f", &salario);
 soma_salarios += salario;
 if (salario > maior_salario) {
 maior_salario = salario;
 }
 if (salario <= 1500.00) {
 contador_ate_1500++;
 }
}
media_salarios = soma_salarios / total_pessoas;
percentual_ate_1500 = (float)contador_ate_1500 / total_pessoas * 100;
printf("\n--- Resultados da Pesquisa ---\n");
printf("Media do salario das pessoas: R$ %.2f\n", media_salarios);
printf("Maior salario encontrado: R$ %.2f\n", maior_salario);
printf("Porcentagem de pessoas com salario ate R$ 1500,00: %.2f%%\n",
percentual_ate_1500);
return 0;
}
