#include<stdio.h>
#include<math.h>
int main ()
{
	int Phy,Chem,Bio,Maths,Com,Percentage;
	scanf("%d %d %d %d %d",&Phy,&Chem,&Bio,&Maths,&Com);
	Percentage=(Phy+Chem+Bio+Maths+Com)/5;
	printf("The percentage is %d%%",Percentage);
	if(Percentage>=90)
	{
		printf("Grade A");
	}
	else if(Percentage>=80 && Percentage<90)
	{
		printf("Grade B");
	}
	else if(Percentage>=70 && Percentage<80)
	{
		printf("Grade C");
	}
	else if(Percentage>=60 && Percentage<70)
	{
		printf("Grade D");
	}
	else if(Percentage>=40 && Percentage<60)
	{
		printf("Grade E");
	}
	else
	{
		printf("Grade F");
	}
	return 0;	
}