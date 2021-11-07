#include <stdio.h>
void ghftn(int b[]);
void Wkrtn(int b[]);
int main(void)
{
	int a[5],i;
	printf("5개의 정수를 입력하세요:");
	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	
	ghftn(a);
	Wkrtn(a);
	return 0;
}
void Wkrtn(int b[])
{
	printf("짝수출력:");
	for (int i = 0; i < 5; i++)
	{
		if (b[i] % 2 == 0)
			printf("%d ", b[i]);
	}
	printf("\n");
}
void ghftn(int b[])
{
	printf("홀수출력:");
	for (int i = 0; i < 5; i++)
	{
		if (b[i] % 2 == 1)
			printf("%d ", b[i]);
	}
	printf("\n");
}