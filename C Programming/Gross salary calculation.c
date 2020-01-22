#include<stdio.h>
int main()
{
	float sal;
	printf("Enter the basic salary of Ramesh\n");
	scanf("%f",&sal);
	printf("Gross salary of Ramesh is = %0.2f",sal-((0.4*sal)+(0.2*sal)));
	return 0;
}
