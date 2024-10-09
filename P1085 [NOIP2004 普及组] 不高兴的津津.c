#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int sub[7] = { 0 };
	int a, b;
	for (size_t i = 0; i < 7; i++)
	{
		scanf("%d%d", &a, &b);
		sub[i] = a + b - 8;
	}
	int max_sub = 0;
	for (size_t i = 0; i < 7; i++)
	{
		if (sub[max_sub] < sub[i])
			max_sub = i;
	}
	if (sub[max_sub] <= 0)
		printf("%d", 0);
	else
	printf("%d\n", max_sub+1);
	return 0;
}