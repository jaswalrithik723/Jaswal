#include<stdio.h>
int main()
{
	int a[7][7],m,n,i,j,sum=0,large=-9999,x,y;
	printf("Enter number of rows and columns respectively\n");
	scanf("%d %d",&m,&n);
	printf("Enter the elements\n");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	sum=sum+a[i][j];
	printf("The sum of all elements of the array = %d\n",sum);
	sum=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		if(a[i][j]>large)
		large=a[i][j];
		sum=sum+large;
		large=-9999;
	}
	printf("The sum of maximum elements from each row = %d\n",sum);
	sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		if(a[j][i]>large)
		large=a[j][i];
		sum=sum+large;
		large=-9999;
	}
	printf("The sum of maximum elements from each column = %d\n",sum);
	return 0;
}
