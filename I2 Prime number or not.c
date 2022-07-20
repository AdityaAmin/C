#include <stdio.h>
int main()
{
  int x, num, prime=1;
  printf("Enter Any Number : ");
  scanf("%d", &num);
  
  for(x=2; x<num; x++)
  {
  	if(num % x == 0)
  	prime = 0;
  	break;
  }
  printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
  if(prime)
  {
  	printf("%d is a prime number", num);
  }
  else
  {
  	printf("%d is not a prime number", num);
  }
  printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
}
  
