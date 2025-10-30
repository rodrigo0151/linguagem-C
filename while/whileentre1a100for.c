/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
   int num[10];
    int i;
    
    for (i=0; i<10; i++)
    {
        printf("\n digite um numero :");
        scanf("%d", &num[i]);
        
        while ((num[i]<0) || (num[i]>100))
        {
        printf("\n digite um numero entre 0 e 100 :");
        scanf("%d", &num[i]);
        }
    }
        
    
   
    return 0;
}