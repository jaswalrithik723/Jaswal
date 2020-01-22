#include<stdio.h>
int sum(int a)
{
	if(a/10==0)
	return a;
	else
	return ((a%10)+sum(a/10));
}
int main()
{
	int b,a;
	scanf("%d",&a);
	b=sum(a);
	printf("%d",b);
	return 0;
}
