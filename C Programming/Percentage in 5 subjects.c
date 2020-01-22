#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5;
	float sum,per;
	printf("Enter the marks scored in 5 subjects out of 100 respectively\n");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	sum=(m1+m2+m3+m4+m5);
	printf("The total marks scored by the student = %.2f\nThe percentage obtained = %.2f",sum,sum/5);
	return 0;
}
