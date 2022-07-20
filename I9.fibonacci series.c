#include<stdio.h>
int main()
{
	int n=10,i;
	int n1=0,n2=1,n3;
	printf("%d\n" , n1);
	printf("%d\n" , n2);
	for(i=2;i<=5;i++)
	{
			n3=n1+n2; 
			
			n1=n2; 
			
			n2=n3; 
			
		printf("%d\n",n3);
		
	}	
}