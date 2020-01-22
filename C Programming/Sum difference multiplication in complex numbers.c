#include<stdio.h>
struct compex
{
	int real;
	int img;
}c[2],add,diff,mul;
int main()
{	int i;
	for(i=0;i<2;i++)
	{
	printf("Enter the complex number%d\n",i+1);
	printf("Real part : ");
	scanf("%d",&c[i].real);
	printf("Imaginary part : ");
	scanf("%d",&c[i].img);
	printf("You have entered %d + %di\n",c[i].real,c[i].img);
	}
	add.real=c[0].real+c[1].real;
	add.img=c[0].img+c[1].img;
	printf("The sum of complex number = %d + %di\n",add.real,add.img);
	diff.real=c[0].real-c[1].real;
	diff.img=c[0].img-c[1].img;
	printf("The difference of complex number = %d + %di\n",diff.real,diff.img);
	mul.real=c[0].real*c[1].real;
	mul.img=c[0].img*c[1].img;
	printf("The multiplication of complex number = %d + %di",mul.real,mul.img);
}
