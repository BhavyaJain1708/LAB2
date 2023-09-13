#include<stdio.h>
#include<math.h>
int main ()
{
	float b,d,h,t,g;
	printf("The base salary is");
	scanf("%f",&b);
	d=0.44*b;
	printf("The tier is");
	scanf("%f",&t);
	if(t==1)
	{
		h=0.24*b;
	}
	else if(t==2)
	{
		h=0.16*b;
	}
	else
	{
		h=0.12*b;
	}
	g=b+d+h;
	printf("The total salary is %f",g);
    return 0;
}