#include <stdio.h>
#include <string.h>
// 연습문제롤 이용해서 하려니 외부참조 오류가 게속 떠서 인터넷을 참고해 다른 방식으로 과제를 풀어 제출했습니다. 
int main(void)
{
	char str[1000] = { 0 };
	int i = 0;
	printf("Input> ");
	gets_s(str, sizeof(str));
	for (i = 0; i < (int)strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	printf("Output> %s", str);
	return 0;

}
