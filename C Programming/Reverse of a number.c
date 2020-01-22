#include<stdio.h>
int main()
{
	int num,rev=0,x;
	printf("Enter any number\n");
	scanf("%d",&num);
	while(num!=0)
	{
		x=num%10;
		rev=10*rev+x;
		num=num/10;
	}
	printf("Reverse of the number = %d",rev);
	return 0;
}
