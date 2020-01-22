#include<stdio.h>
int main()
{
	int a1=1682,a2=1189,a3,i;
	printf("All the paper sizes from A0 to A8 respectively are-\n");
	for(i=0;i<8;i++)
	{
		a3=a1;
		a1=a2;
		a2=a3/2;
		printf("%dmm * %dmm\n",a1,a2);
	}
	return 0;
}
