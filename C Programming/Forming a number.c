#include<stdio.h>
void form(int n,int a[])
{
	int i,sum=0;
	for(i=0;i<n;i++)
	sum=10*sum+a[i];
	printf("The required number is %d",sum);
}
int main()
{
	int n,i,a[23];
	printf("Enter the number of digits\n");
	scanf("%d",&n);
	printf("Enter the digits\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	form(n,a);
	return 0;
}
