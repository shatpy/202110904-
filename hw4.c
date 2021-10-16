#include <stdio.h>
int jung(int num)
{
	if (num == 0 || num == 1)
		printf("%d", num);
	else
	{
		jung(num / 2);
		printf("%d", num % 2);
			}
		


}


int main(void)
{
	int num;
	printf("pleas enter a number:");
	scanf("%d", &num);
	jung(num);
	return 0;
}