#include<stdio.h>
struct circle
{
    int r;
}a,area1;
struct rect 
{
    int l;
    int br;
}b,area2;
struct triangle
{
    int bl;
    int h;
}c,area3;
void cir(struct circle a)
{
    printf("Enter the radius of the circle\n");
    scanf("%d",&a.r);
    printf("Area of circle = %f\n",3.14*a.r*a.r);
}
void rec(struct rect b)
{
    printf("Enter the lenth and breadth of the rectangle\n");
    scanf("%d %d",&b.l,&b.br);
    printf("Area of rectangle = %d\n",b.l*b.br);
}
void tri(struct triangle c)
{
    printf("Enter the base and height of triangle\n");
    scanf("%d %d",&c.bl,&c.h);
    printf("Area of triangle = %f\n",0.5*c.bl*c.h);
}
int main()
{   int i,k;
    printf("There are three shapes whose area you can calculate\n1.Circle\n2.Rectangle\n3.Triangle\nEnter the shape whose area you want to calculate(select 1,2, or 3)\nEnter 0 if you want to close\n");
    do
    {
    scanf("%d",&i);
    if(i==0)
    break;
    else
    if(i==1)
    cir(a);
    else if(i==2)
    rec(b);
    else if(i==3)
    tri(c);
    else
    printf("Enter number 1,2, or 3 only\n");
    printf("Select again\n");
	}
	while(i!=0);
    return 0;
}
