#include<stdio.h>
int main()
{
	float l,b,r;
	printf("Enter the length and breadth of rectange\n");
	scanf("%f %f",&l,&b);
	printf("Area of rectangle = %.2f\nPerimeter of rectange = %.2f\n\nEnter the radius of Cricle",l*b,2*(l+b));
	scanf("%f",&r);
	printf("Area of circle = %.2f\nCircumfrence of circle = %.2f",3.14*r*r,2*3.14*r);
	return 0;
}
