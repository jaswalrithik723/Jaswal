#include<stdio.h>
void sum(int n,int a[])
{
    int i,sum=0;
    for(i=0;i<n;i++)
    sum=sum+a[i];
    printf("Sum of digits is %d",sum);
}
int main()
{
    int n,a[23],i;
    printf("Enter number of digits",n);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sum(n,a);
    return 0;
}
