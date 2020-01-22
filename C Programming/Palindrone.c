#include<stdio.h>
int rev(int a)
{
    int x,i,rev=0;
    while(a!=0)
    {
        x=a%10;
        rev=10*rev+x;
        a=a/10;
    }
    return rev;
}
int main()
{
    int a,i;
    printf("Enter any number\n");
    scanf("%d",&a);
    i=rev(a);
    if(i==a)
    printf("Equal number");
    else
    printf("Not equal");
    return 0;
}
