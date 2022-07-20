#include <stdio.h>
int main()
{
	int h, b;
	float area;
	printf("Enter height : ");
	scanf("%d", &h);
	printf("Enter base : ");
	scanf("%d", &b);
	area = h * b / 2;
	printf("\n-*-*-*-*-*-*-*-*-*-");
	printf("\narea : %.2f", area);
	printf("\n-*-*-*-*-*-*-*-*-*-");
}