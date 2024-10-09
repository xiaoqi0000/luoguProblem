#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Tree[10000] = { 0 };
int main() {
	int len, n;
	scanf("%d", &len);
	scanf("%d", &n);
	for (size_t i = 0; i <= len; i++)
	{	
		Tree[i] = 1;
	}
	int start, end;
	for (size_t i = 0; i < n; i++)
	{
		scanf("%d%d", &start, &end);
		for (int j = start; j <= end; j++)
		{
			Tree[j] = 0;
		}
	}
	int count = 0;
	for (size_t i = 0; i <= len; i++)
	{
		if (Tree[i] == 1)
		{
			count++;
		}

	}
	printf("%d\n", count);
	return 0;
}