#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,r,q;
	printf("Enter the cartesian coordinates of a point\n");
	scanf("%f%f",&x,&y);
	r=sqrt((x*x)+(y*y));
	q=atan(y/x);
	printf("The polar form of these coordinates = %f %f",r,q);
	return 0;
}

