#include <stdio.h>
int main()
{
	int max, a= 20, b= 50, c= 40;
	printf("a = %d , b = %d , c= %d",a,b,c );
	max=(a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);	
	printf("\nmax : %d", max);
}