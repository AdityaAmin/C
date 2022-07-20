#include <stdio.h>
int main()
{
	
	float phy, che, bio, total, per;
	printf("physics : ");
	scanf("%f", &phy);
	printf("chemistry : ");
	scanf("%f", &che);
	printf("biology : ");
	scanf("%f", &bio);
	total= phy + che + bio;
	printf("\n---------------");
	printf("\ntotal : %.f", total);
	per= total / 3;
	printf("\n---------------");
	printf("\nper : %.2f", per);
	printf("\n---------------\n");
	printf("\n-*-*-*-*-*-*-*-");
	
	if(per>75)
	{
		printf("\nDistinction");
	}
	else if(per>60)
	{
	    printf("\nfirst class");
	}
	else if(per>50)	
	{
		printf("\nsecond class");
	}
	else
	{
		printf("\npass");
	}
    printf("\n-*-*-*-*-*-*-*-");
}