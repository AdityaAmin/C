#include <stdio.h>
int main()
{
	int fact=1, num, x;
	printf("Enter Number : ");
	scanf("%d", &num);
	for( x=1; x<=num; x++)
	{
		fact = fact * x;
	}
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
	printf("Factorial of %d is : %d", num,fact);
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
   
}