#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,j,tag,pos;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[pos]>a[j])
			pos=j;
		}
		if(pos!=i)
		{
			tag=a[pos];
			a[pos]=a[i];
			a[i]=tag;
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
