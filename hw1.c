#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("�������� �Է��ϼ���:");
	scanf("%d%d", &a, &b);
	c = a & b;
	printf("%d & %d = %d\n", a, b, c);
	c = a | b;
	printf("%d | %d = %d\n", a, b, c);
	c = a ^ b;
	printf("%d ^ %d = %d", a, b, c);




}