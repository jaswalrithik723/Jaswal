#include<stdio.h>
#include<math.h>
int main()
{
	float wcf,t,v;
	printf("Enter the values of temperature and velocity of wind\n");
	scanf("%f%f",&t,&v);
	wcf=35.74+(0.6215*t)+(((0.4275*t)-35.75)*pow(v,0.16));
	printf("The wind chill factor = %f",wcf);
	return 0;
}
