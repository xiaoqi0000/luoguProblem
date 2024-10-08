#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double Sn = 0;
	int k = 0;
	scanf("%d", &k);
	int un = 1;
	while (Sn <= k)
	{
		Sn += 1.0 / un;
		un++;
	}
	un--;
	printf("%d\n", un);
	return 0;
}