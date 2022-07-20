#include <stdio.h>
int main()
{
	int P, R, T;
	float SI;
	printf(" Borrowed Amount : ");
	scanf("%d", &P);
	printf(" Rate of Intrest : ");
	scanf("%d", &R);
	printf(" Time : ");
	scanf("%d", &T);
	SI = (P * R * T)/ 100;
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-");
	printf("\nSimple Interest : %.2f", SI);
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-");
}