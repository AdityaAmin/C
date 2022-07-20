#include <stdio.h>
int main ()
{
	int num, x, max=0;
	printf("Enter Number : ");
	scanf("%d", &num);
	
	while(num!=0)
	{
		x=num%10;
		if(x>max)
		max=x;
		num=num/10; 
	}
	printf("\n------------------");
	printf("\nLargest digit : %d", max);
	printf("\n------------------");
}