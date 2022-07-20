#include <stdio.h>
int main()
{
	int a[10], sum=0, i;
	float ave;
	printf("Enter 10 Numbers : \n");
	scanf("%d", &a[10]);
	
	for(i=0; i<9; i++)
	scanf("%d", &a[i]);
	
    for(i=0; i<9; i++)
	{
		sum=sum + a[i];
	}
	ave = sum / 10.0;
	printf("\n*************************************\n");
	printf("Sum of total numbers :  %d", sum);
	printf("\n*************************************\n");
    printf("Average of total numbers :  %.2f", ave);
	printf("\n*************************************");
}

																								