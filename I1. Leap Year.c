#include <stdio.h>
int main()
{
	int year;
	printf("Write Year : ");
	scanf("%d",&year);
	printf("%d", year%4);
	printf("\n-*-*-*-*-*-*-*-*-*-");

	if(year%4==0)
	{
		printf("\nLeap Year");
	}
	else
	{
		printf("\nNot Leap Year");
	}
	printf("\n-*-*-*-*-*-*-*-*-*-");

}