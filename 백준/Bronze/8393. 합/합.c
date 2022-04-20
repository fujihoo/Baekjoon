#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;
	int sum = 0;
	scanf("%d", &n);

	if (n >= 1 && n <= 10000)
	{
		for (int i = 1; i <= n; i++)
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);

	return 0;
}