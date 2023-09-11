#include<stdio.h>
#include<math.h>
int main ()
{
	int u,s;
	scanf("%d %d",&u,&s);
	if(u>=0 && u<=100)
	printf("%d",(u*2)+s);
	else if(u>=101 && u<=250)
	printf("%d",(u*3)+s);
	else
	printf("%d",(u*5)+s);
	return 0;
}
