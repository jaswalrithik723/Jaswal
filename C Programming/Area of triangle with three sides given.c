#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float area,sem;
	printf("Enter the three sides of a triangle respectively\n");
	scanf("%d%d%d",&a,&b,&c);
	sem=(a+b+c)/2.0;
	area=sqrt(sem*(sem-a)*(sem-b)*(sem-c));
	printf("Area of triangle = %f",area);
	return 0;
}
