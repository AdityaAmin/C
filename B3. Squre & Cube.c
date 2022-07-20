#include <stdio.h>
int main()
{
	int X, Squre, Cube;
	printf("Enter X : ");
	scanf("%d", &X);
	Squre = X * X ;
	Cube = X * X * X ;
	printf("\n--------------------------------------------------------");
	printf("\nSqure : %d", Squre);	
	printf("\n--------------------------------------------------------");
	printf("\nCube : %d", Cube);
}