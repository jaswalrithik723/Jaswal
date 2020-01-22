#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,j,tag,d;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n-1;i++)
	{
		d=i;
		while(d>0&&a[d-1]>a[d])
		{
			tag=a[d-1];
			a[d-1]=a[d];
			a[d]=tag;
			d--;
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
