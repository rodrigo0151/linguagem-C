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
    int i, j, num;
    int sorteio[10];
    int c1[10], c2[10], c3[10];
    int t1,t2,t3;
    
    t1=0;
    t2=0;
    t3=0;
    
    srand(time(NULL)); // Sorteia números aleatórios com base nos millisegundos do relógio
    
    for (i=0; i<10; i++)
    {
    	c1[i]= rand()%20;
		c2[i]= rand()%20;
		c3[i]= rand()%20;
	}
	
	
	
	printf("\n Cartela 1 :  ");
	for (i=0; i<10; i++) {
		printf("%d ", c1[i]);
	}
	
	printf("\n Cartela 2 :  ");
	for (i=0; i<10; i++) {
		printf("%d ", c2[i]);
	}
	
	printf("\n Cartela 3 :  ");
	for (i=0; i<10; i++) {
		printf("%d ", c3[i]);
	}
	
	for (i=0; i<10; i++) 
	{
		for (j=0; j<10; j++) 
		{
			if(c1[i]==c2[j])
			{
			num=c1[i];
			}
			if(c1[i]==c3[j])
			{
				num=c1[i];
			}
			if(c2[i]==c3[j])
			{
				num=c2[i];
			}
			if ((c1[i]==c2[j]) && (c1[i]==c3[j]))
			{
				num=c1[i];
			}
		}
	}
	

	
	for(i=0; i<10; i++)
	{
		sorteio[i]= rand()%20;
		while (sorteio[i]=num)
		{
			sorteio[i]=rand ()%20;
		}
	}
	
		printf("\n Sorteio : ");
	for (i=0; i<10; i++) {
		printf("%d " , sorteio[i]);	
	}
	
	for (i=0; i<10; i++) 
	{
		for (j=0; j<10; j++) 
		{
			if(sorteio[i] == c1[j])
			{
				printf("\n O numero %d sorteado na posicao %d eh igual ao numero %d na cartela 1 na posicao %d", sorteio[i], i, c1[j], j);
				t1=t1+1;
			}
			
			if(sorteio[i] == c2[j])
			{
				printf("\n O numero %d sorteado na posicao %d eh igual ao numero %d na cartela 2 na posicao %d", sorteio[i], i, c2[j], j);
				t2=t2+1;
			}
			
			if(sorteio[i] == c3[j])
			{
				printf("\n O numero %d sorteado na posicao %d eh igual ao numero %d na cartela 3 na posicao %d", sorteio[i], i, c3[j], j);
				t3=t3+1;
			}
		}
	}
	
	
	
	printf("\n Total de acertos da primeira cartela foi %d", t1);
	printf("\n Total de acertos da segunda cartela foi %d", t2);
	printf("\n Total de acertos da terceira cartela foi %d", t3);
	
	
	
    
  
    return 0;
}