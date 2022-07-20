#include <stdio.h>
int main()
{
	int x, y, z;
	for(x=1; x<=5; x++)
	{
		for(y=x; y<5; y++)
		{
			printf(" ");
		}
		for(z=1; z<=x; z++)
		{
			printf("*");		
		}
		printf("\n");
	}
}