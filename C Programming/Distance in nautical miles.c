#include<stdio.h>
#include<math.h>
int main()
{
	float l1,l2,g1,g2,d;
	printf("Enter the latitude and longitude of a place\n");
	scanf("%f%f",&l1,&g1);
	printf("Enter the latitude and longitude of second place\n");
	scanf("%f%f",&l2,&g2);
	d=3963*acos((sin(l1)*sin(l2))+(cos(l1)*cos(l2)*cos(g2-g1)));
	printf("The distance in nautical miles = %f",d);
	return 0;
	
}
