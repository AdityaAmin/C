#include <stdio.h>
int main()
{
	int number;
	printf("Enter number : ");
	scanf("%d",&number);
	if(number>0)
	{
		printf("-----------------\n");
		printf("+ve number");
	}
	else
	{
		printf("\n-----------------");
		printf("-ve number");
	}
}