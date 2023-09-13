#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c;
	printf("The three numbers are");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && a>c)
	printf("%d",a);
	else if (b>c && b>a)
	printf("%d",b);
	else if (c>b && c>a)
	printf("%d",c);
	else 
	printf("%d",a);
	return 0;
}