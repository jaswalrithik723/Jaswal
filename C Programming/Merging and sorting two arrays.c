#include<stdio.h>
int main()
{
	int a1[23],a2[23],a3[23],n1,n2,c,i,j;
	printf("Enter the number of digits in first array\n");
	scanf("%d",&n1);
	printf("Enter the digits\n");
	for(i=0;i<n1;i++)
	scanf("%d",&a1[i]);
	printf("Enter the number of digits in second array\n");
	scanf("%d",&n2);
	printf("Enter the digits\n");
	for(i=0;i<n2;i++)
	scanf("%d",&a2[i]);
	for(i=0;i<n1+n2;i++)
	{
		if(i<n1)
		a3[i]=a1[i];
		else
		a3[i]=a2[i-n1];
	}
	for(i=0;i<n1+n2;i++)
	{
		for(j=i+1;j<n1+n2;j++)
		{
			if(a3[i]>a3[j])
			{
			c=a3[i];
			a3[i]=a3[j];
			a3[j]=c;
			}
		}
	}
	for(i=0;i<n1+n2;i++)
	printf("%d ", a3[i]);
	return 0;
}
