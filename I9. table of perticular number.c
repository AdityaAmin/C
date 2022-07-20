#include <stdio.h>
int main()
{
	int n, x;
	printf("-------------------");
	printf("\nEnter number : ");
	scanf("%d", &n);
	printf("------------------- \n");
	printf("\n-*-*-*-*-*-*-*-\n");
	
	for(x = 1; x <= 10; x++)
	{
		printf("%d  x %2d = %d\n", n, x, x * n);
	}
	printf("-*-*-*-*-*-*-*-\n");
} 	