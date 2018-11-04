#include <stdio.h>
#include <math.h>

int main()
{
	char a;
	printf("请输入一个字符：");
	a = getchar();
	if(a >= 'a' && a <= 'z')
		printf("大写字符为：%c\n", a - 32);
	else
		printf("无法转换字符：%c\n", a);
	return 0;
}
