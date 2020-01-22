#include<stdio.h>
#include<math.h>
int main()
{
	float angle;
	printf("Enter any angle in radians\n");
	scanf("%f",&angle);
	printf("Sin(%f) = %f\nCos(%f) = %f\nTan(%f) = %f\nSec(%f) = %f\nCosec(%f) = %f",angle,sin(angle),angle,cos(angle),angle,tan(angle),angle,sec(angle),angle,cosec(angle));
	return 0;
}
