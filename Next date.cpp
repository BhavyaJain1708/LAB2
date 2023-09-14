#include<stdio.h>
#include<math.h>
int main ()
{
	int d,m,y,D,M,Y;
	printf("The date is");
	scanf("%d",&d);
	printf("The month is");
	scanf("%d",&m);
	printf("The year is");
	scanf("%d",&y);
	if((m==1||m==3||m==5||m==7||m==8||m==10||m==12) && (d>0 && d<31))
	{
	D=d+1;
	M=m;
	Y=y;
	printf("The next date is %d %d %d",D,M,Y);
    }
	else if(m==1||m==3||m==5||m==7||m==8||m==10 && d==31)
	{
	D=1;
	M=m+1;
	Y=y;
	printf("The next date is %d %d %d",D,M,Y);
	}	
	else if(m==12 && d==31)
	{
	D=1;
	M=1;
	Y=y+1;
	printf("The next date is %d %d %d",D,M,Y);
	}
	else if((m==4||m==6||m==9||m==11)&&(d>0 && d<30))
	{
	D=d+1;
	M=m;
	Y=y;
	printf("The next date is %d %d %d",D,M,Y);
	}
	else if((m==4||m==6||m==9||m==11)&& d==30)
	{
	D=1;
	M=m+1;
	Y=y;
	printf("The next date is %d %d %d",D,M,Y);
	}
	else if (m==2 && (d>0 && d<28))
	{
	D=d+1;
	M=m;
	Y=y;
	printf("The next date is %d %d %d",D,M,Y);
	}
	else if (m==2 && d==28 && (y%4==0 && (y%100!=0 || y%400==0)))
	{
	D=29;
	M=2;
	Y=y;
	printf("The next date is %d %d %d",D,M,Y);	
	}
	else if (m==2 && d==28 && (y%4!=0 && (y%100==0 || y%400!=0)))
	{
	D=1;
	M=3;
	Y=y;
	printf("The next date is %d %d %d",D,M,Y);
	}
	else
	printf("Invalid input");
	return 0;
}