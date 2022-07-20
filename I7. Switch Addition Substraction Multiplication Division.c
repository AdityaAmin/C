#include <stdio.h>
int main()
{
	int Choice, Addition, Substraction, Multiplication;
	float a, b, Division;
	printf("Enter a : ");
	scanf("%f", &a);
	printf("Enter b : ");
	scanf("%f", &b);
	
	Addition = a + b;
	Substraction = a - b;
	Multiplication = a * b;
	Division = a / b;
	
	printf("\n1. Addition ");
	printf("\n2. Substraction ");
	printf("\n3. Multiplication ");	
	printf("\n4. Division ");
	printf("\n-------------------------------");
	printf("\nPlease Enter Your Choice : ");
	scanf("%d", &Choice);
	printf("-------------------------------\n");
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");

	switch(Choice)
	{
		case 1 : printf("\nAddition %d", Addition);
	    break;
		
		case 2 : printf("\nSubstraction %d", Substraction);
		break;
		        
		case 3 : printf("\nMultiplication %d", Multiplication);
		break;
		        
		case 4 : printf("\nDivision %.2f", Division);
	}
		printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");

}