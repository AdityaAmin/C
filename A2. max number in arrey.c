#include <stdio.h>
int main()
{
	int arr[10], i, max;
	printf("Enter 10 Numbers : \n");
	
	for(i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}
	max=arr[0];
	for(i=0;i<10;i++)
	{
		if( arr[i]>max )
		{
			max= arr[i];
		}
	}
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
	printf("Maximum Number of Array : %d", max);
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");

}