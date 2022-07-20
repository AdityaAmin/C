#include <stdio.h>
int main(void) 
{
	int num, sum=0, m;
	printf("Enter any number : "); //123
	scanf("%d", &num);
		
	while (num>0)
	{
		m=num %10; 
		sum=sum + m;
		num=num/10;
	}
	printf("\n--------------------");
	printf("\n sum :  %d", sum);	
	printf("\n--------------------");
}
