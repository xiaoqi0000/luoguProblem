#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int Tree_hight[10] = { 0 };
	int count = 0;
	int taotao_hight = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &Tree_hight[i]);
	}
	scanf("%d", &taotao_hight);
	taotao_hight += 30;
	for (size_t i = 0; i < 10; i++)
	{
		//printf("%d ", Tree_hight[i]);
		if (Tree_hight[i] <= taotao_hight)
			count++;
	}
	//printf("\n11   %d", taotao_hight);

	printf("%d\n", count);
	return 0;
}