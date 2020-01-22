#include<stdio.h>
int main()
{
	int num,sum=0,x;
	printf("Enter a five digit number\n");
	scanf("%d",&num);
	while(num!=0)
	{
	x=num%10;
	sum=sum+x;
	num=num/10;
	}
	printf("The sum of digits = %d",sum);
	return 0;
}
