#include<stdio.h>
void prime(int n)
{
    int i,a[100],x,j,tag=0;
    if(n>=2)
    printf("2\t");
    for(i=3;i<n;i++)
    {
        tag=0;
        x=i;
        for(j=2;j<x;j++)
        {
            if(x%j==0)
            {
                tag=1;
                break;
            }
            
        }
        if(tag==0)
        printf("%d\t",x);
    }
}
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    prime(n);
}
