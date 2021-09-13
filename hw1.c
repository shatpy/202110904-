#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("두정수를 입력하세요:");
	scanf("%d%d", &a, &b);
	c = a & b;
	printf("%d & %d = %d\n", a, b, c);
	c = a | b;
	printf("%d | %d = %d\n", a, b, c);
	c = a ^ b;
	printf("%d ^ %d = %d", a, b, c);




}