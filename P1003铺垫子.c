#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100005
int a[MAX], b[MAX], g[MAX], k[MAX];

int main() {
	int n;
	int x, y;
	scanf("%d", &n);

	//得到所有垫子
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &a[i], &b[i], &g[i], &k[i]);
	}
	//得到xy坐标
	scanf("%d %d", &x, &y);
	int sen = -1;
	for (int i = 0; i < n; i++)
	{
		//垫子在坐标上
		if (x >= a[i] && y >= b[i] && x <= a[i] + g[i] && y <= b[i] + k[i])
		{
			sen = i + 1;
		}
	}
	printf("%d\n", sen);
	return 0;
}