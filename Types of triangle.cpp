#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c;
	printf("The sides of triangle are");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b && b==c && c==a)
	printf("It is an equilateral triangle");
	else if (a!=b && b!=c && c!=a)
	printf("It is a scalene triangle");
	else
	printf("It is an isosceles tringle");
	return 0;
}