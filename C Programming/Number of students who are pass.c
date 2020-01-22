#include<stdio.h>
void pass(int n,int a[])
{
    int i,count=0;
    for(i=0;i<n;i++)
        if(a[i]>=50)
        count++;
    printf("The number of pass students = %d",count);    
}
int main()
{
    int a[23],i,n;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    pass(n,a);
}
