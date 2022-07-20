#include <stdio.h>
int main()
{
	int choice;
	float Tringal, Rectangle, Circle, h, b, w, l, r, A;
	printf("Enter h : ");
	scanf("%f", &h);
	printf("Enter b : ");
	scanf("%f", &b);
	printf("Enter w : ");
	scanf("%f",&w);
	printf("Enter l : ");
	scanf("%f", &l);
	printf("Enter r : ");
	scanf("%f", &r);
	
	Tringal = h * b / 2;
	Rectangle = w * l;
	Circle = 3.14 * r * r;
	
	printf("\n1. Circle");
    printf("\n2. Tringal");
    printf("\n3. Rectangle");
    
    printf("\n---------------------------------\n");
    printf("Please Enter Your Choice : ");
    scanf("%d", &choice);
    printf("---------------------------------");
    
    printf("\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");

    if(choice=1)
	{
		printf("\nCircle %.2f", Circle);
	}
	else if(choice=2)
	{
		printf("\nTriangle %.2f", Tringal);
	}
	else if(choice=3)
	{
		printf("\nRectangle %.2f", Rectangle);
	}
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
}



//tringal A= h * b / 2
//rectangle A= w * l
//circle A=3.14 * r * r