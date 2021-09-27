#include <stdio.h>
int main(void)
{
	int a,b,c= 0;
	printf("please enter a number:");
	scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		if (a % b == 0)
		{
			c++;
		}

	}
	if (c == 2)
		{
		printf("It is  a prime number.");
		}
	else {
		printf("It is not a prime number.");
	}
		return 0;
}