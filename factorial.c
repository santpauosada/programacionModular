#include <stdio.h>

float factorial(int n)
{
	float f;
	if (n==0) f=1;
	else f=n*factorial(n-1);
	return f;

}

 int main()
{
	int fact;
	int n;
	printf("\n Dame un numero: ");
	scanf("%d", &n);
	fact=factorial(n);
	printf("\n El factorial es=%d\n",fact);
return 0; 

}

