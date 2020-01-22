#include<stdio.h>
#include<math.h>
int abc(int a[])
{
    int i,j,c;
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(a[i]>a[j])
            {
               c=a[i];
               a[i]=a[j];
               a[j]=c;
                }
        }
    }
    if((a[2]-a[1]==1)&&(a[1]-a[0]==1))
    return 1;
    else
    return 0;
}
int main()
{
 int a[3],i,k;
 printf("Enter three numbers\n");
 for(i=0;i<3;i++)
 scanf("%d",&a[i]);
 k=abc(a);
 printf("%d",k);
 return 0;
}
