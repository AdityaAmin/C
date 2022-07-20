#include <stdio.h>
int main()
{
	int a= 450, b= 570, c= 340;
	if(a>b)
	{
		if(a>c)
		{
			printf("%d", a);
		}															
		else
		{
			printf("%d", c);
		}
	}
	else if(b>c)
	{
		printf("%d", b);
	}
	else
	{
		printf("%d", c);
	}
	
}