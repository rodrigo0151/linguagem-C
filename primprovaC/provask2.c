/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> 
#include <stdlib.h> 

int main(void) { 

    int n[4], soma, f; 

    int i; 

    soma = 0; 

     

    for(i = 0; i < 4; i++) { 

        printf("\n Digite a nota do aluno (%d/4): ", i+1); 

        scanf("%d", &n[i]); 

         

        if(n[i] < 0 || n[i] > 25) { 

            printf("\n As notas tem que estar entre 0 e 25!"); 

            return 1; 

        } 

         

        soma += n[i]; // já soma aqui direto 

    } 

 

    printf("\n Soma total = %d", soma); 

 

    if(soma > 59) { 

        printf("\n O aluno esta aprovado!"); 

    } 

    else if(soma < 40) { 

        printf("\n O aluno esta reprovado!"); 

    } 

    else if ((soma >= 40) && (soma <= 59) ) {  

        // Entre 40 e 59 -> Prova final 

        printf("\n O aluno vai fazer a prova final. Digite a nota da final: "); 

        scanf("%d", &f); 

 

        if(f >= 70) { 

            printf("\n O aluno esta aprovado na final!"); 

        } else if (f < 70) { 

            printf("\n O aluno esta reprovado na final!"); 

        } 

    } 

 

    return 0; 

} 