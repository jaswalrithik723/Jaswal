#include<stdio.h>
int main()
{
	float dist;
	printf("Enter the distance between two cities in kilometers\n");
	scanf("%f",&dist);
	printf("Distance in meters = %.2f\nDistance in feet = %.2f\nDistance in inches = %.2f\nDistance in centimeters = %.2f",dist*1000,dist*3280.84,dist*39370.08,dist*100000);
	return 0;
}
