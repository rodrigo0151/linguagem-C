/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,vp,vn,zero;
    vp=0;
    vn=0;
    zero=0;
    printf("\n Escreva 10 números");
    scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8,&x9,&x10);
    //vp
    if (x1>0)
	{
	    printf("\n O numero %d é positivo",x1);
        vp=vp+1;
    }
     if (x2>0)
	{
	    printf("\n O numero %d é positivo",x2);
        vp=vp+1;
    }
     if (x3>0)
	{
	    printf("\n O numero %d é positivo",x3);
        vp=vp+1;
    }
     if (x4>0)
	{
	    printf("\n O numero %d é positivo",x4);
        vp=vp+1;
    }
     if (x5>0)
	{
	    printf("\n O numero %d é positivo",x5);
        vp=vp+1;
    }
     if (x6>0)
	{
	    printf("\n O numero %d é positivo",x6);
        vp=vp+1;
    }
     if (x7>0)
	{
	    printf("\n O numero %d é positivo",x7);
        vp=vp+1;
    }
     if (x8>0)
	{
	    printf("\n O numero %d é positivo",x8);
        vp=vp+1;
    }
     if (x9>0)
	{
	    printf("\n O numero %d é positivo",x9);
        vp=vp+1;
    }
     if (x10>0)
	{
	    printf("\n O numero %d é positivo",x10);
        vp=vp+1;
    }
    //vn
   if (x1<0)
	{
	    printf("\n O numero %d é negativo",x1);
        vn=vn+1;
    }
     if (x2<0)
	{
	    printf("\n O numero %d é negativo",x2);
        vn=vn+1;
    }
     if (x3<0)
	{
	    printf("\n O numero %d é negativo",x3);
        vn=vn+1;
    }
     if (x4<0)
	{
	    printf("\n O numero %d é negativo",x4);
        vn=vn+1;
    }
     if (x5<0)
	{
	    printf("\n O numero %d é negativo",x5);
        vn=vn+1;
    }
     if (x6<0)
	{
	    printf("\n O numero %d é negativo",x6);
        vn=vn+1;
    }
     if (x7<0)
	{
	    printf("\n O numero %d é negativo",x7);
        vn=vn+1;
    }
     if (x8<0)
	{
	    printf("\n O numero %d é negativo",x8);
        vn=vn+1;
    }
     if (x9<0)
	{
	    printf("\n O numero %d é negativo",x9);
        vn=vn+1;
    }
     if (x10<0)
	{
	    printf("\n O numero %d é negativo",x10);
        vn=vn+1;
    }
    if (x1,x2,x3,x4,x5,x6,x7,x8,x9,x10==0)
    {
        printf("\n O numero %d é igual a 0");
    }
    printf("\n O total de positivas são : %d",vp);
    printf("\n O total de negativas são : %d",vn);
}
