#include<stdio.h>
#include<math.h>
int main ()
{
	char I;
	scanf("%c",&I);
	if ((I>=65 && I<=90)||(I>=97 && I<=122))
	printf("The input character is an Alphabet");
	else if (I>=48 && I<=57)
	printf("The input character is a Digit");
	else
	printf("The input character is a Special Character");
	return 0;
}
