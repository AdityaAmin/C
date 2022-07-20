#include <stdio.h>
int main()
{
	int A, B, Addition, Substraction, Multiplication;
	float Division;
	printf(" Enter A : ");
	scanf("%d", &A);
	printf(" Enter B : ");
	scanf("%d", &B);
	Addition = A + B ;
	Substraction = A - B ;
	Multiplication = A * B ;
	Division = A / B ;
	printf("\n--------------------------------------------------------");
	printf("\nAddition %d", Addition);
	printf("\n--------------------------------------------------------");
	printf("\nSubstraction %d", Substraction);	
	printf("\n--------------------------------------------------------");
	printf("\nMultiplication %d", Multiplication);	
	printf("\n--------------------------------------------------------");
    printf("\nDivision %.2f", Division);	
}