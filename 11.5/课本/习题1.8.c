#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;
	int min = 0;
	printf("请输入三个数字并用空格隔开:");
	scanf("%d%d%d", &a, &b, &c);

	if(a > b)// 如果a > b那么说明最小数字在，b和c之间
	{
		if(b > c)
			min = c;
		else
			min = b;
	}
	else // 否则，最小数字在a,c之间
	{
		if(a > c)
			min = c;
		else
			min = a;
	}

	printf("最小的数字为:%d\n", min);
	return 0;	
}
