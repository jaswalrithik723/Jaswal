#include<stdio.h>
int main()
{
	float temp,far;
	printf("Enter the temperature of city in Fahrenheit\n");
	scanf("%f",&far);
	temp=(far-32)*(5/9.0);
	printf("Temperature in celcius = %.2f",temp);
	return 0;
}
