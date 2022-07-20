#include <stdio.h>
int main()
{
	int r;
	float Area;
	printf("Enter radius : ");
	scanf("%d", &r);
	Area = 3.14 * r * r;
	printf("\n-*-*-*-*-*-*-*-*-*-");
	printf("\nArea : %.2f", Area);
	printf("\n-*-*-*-*-*-*-*-*-*-");
}