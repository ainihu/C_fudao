#include <stdio.h>
#include <math.h>

int main()
{
	int a = 0;
	printf("请输入一个数值：");
	scanf("%d", &a);
	while(a)
	{
		printf("%d  ", a % 10);
		a /= 10;
	}
	printf("\n");
	return 0;
}
