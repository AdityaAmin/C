#include <stdio.h>
int main()
{
	int a=10, b=20, c;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d,b=%d", a, b);
}	