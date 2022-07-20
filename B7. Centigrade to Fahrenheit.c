#include <stdio.h>
int main()
{
	float F, c;
	printf("celsius : ");
	scanf("%f", &c);
	F = 1.8 * c + 32;
	printf("\n-*-*-*-*-*-*-*-*-*-*-");
	printf("\nfahrenheit : %.2f", F);
	printf("\n-*-*-*-*-*-*-*-*-*-*-");
}












 //fahrenheit = (1.8 * celsius) + 32