#include <stdio.h>
int main()
{
	int a[10], Even=0, Odd=0, i;
	printf("Enter 10 Numbers\n");
	
	for(i=0; i<10; i++)
	{
	    scanf("%d", &a[i]);
	}
	printf("\n\nEven Numbers");
	printf("\n----------------------\n");

	for(i=0; i<10; i++)
	{
		if(a[i]%2==0)
		{
			printf("%d  ", a[i]);
			Even++;	
		}
	}
    printf("\n----------------------\n");
    printf("\nOdd Numbers");
    printf("\n----------------------\n");
    for(i=0; i<10; i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d  ", a[i]);
			Odd++;	
		}
	}
    printf("\n----------------------\n");

	printf("\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
	printf("Total Even Numbers = %d\n", Even);	
	printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
    printf("Total Odd Numbers = %d", Odd);
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
}