#include<stdio.h>
struct dat
{
	int date;
	int month;
	int year;
	int days;
}s[2],diff;
void difference(struct dat s[2])
{
	int dt[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i,x=0;
	if(s[0].year%4==0)
	dt[1]=29;
	if(s[0].month-s[1].month==0)
	printf("The difference between these two dates = %d days",s[1].date-s[0].date+1);
	else
	{
		for(i=s[0].month;i<s[1].month-1;i++)
		x=x+dt[i];
		diff.days=(dt[s[0].month-1]-s[0].date)+x+s[1].date;
		printf("The difference between these two dates = %d days",diff.days+1);
	}
	
}
int main()
{
	int i;
	printf("Enter the start and end date in day month and year format\n");
	for(i=0;i<2;i++)
	scanf("%d %d %d",&s[i].date,&s[i].month,&s[i].year);
	difference(s);
	return 0;
}
