#include <stdio.h>
#include <math.h>

int main()
{
	double a = 0, b = 0, c = 0, d = 0;
	printf("请输入四个数值：");
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

	printf("平均值为：%.2lf\n", (a + b + c + d) / 4);
	return 0;
}
