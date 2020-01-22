#include<stdio.h>

struct student
{
	char b[9];
	float y;
	double h;
	char c[6];
	int i[2];
};
int main()
{
//s1=&s2;
printf("%d",sizeof(struct student));
}

/*c c c c c c c c
c       f f f f
d d d d d d d d
c c c c c c
i i i i i i i i*/
