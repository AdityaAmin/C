#include <stdio.h>
int main()
{
	int num, sum=0, lastdigit;
	printf("Enter the Number : "); //2345
	scanf("%d", &num);
	
	lastdigit = num % 10; 
	while (num>=10)
	{
		num=num/10;
	}
	sum = lastdigit + num;
	printf("\n--------------------------------");
	printf("\nsum of first & last digits : %d", sum);		
	printf("\n--------------------------------");

}