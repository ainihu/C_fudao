#include <stdio.h>
#include <math.h>

int main()
{
	double area = 0;
	double s = 0;
	double a = 0, b = 0, c = 0;
	printf("请输入三角形的三条边的长度：");
	scanf("%lf%lf%lf", &a, &b, &c);

	if(a + b <= c || a + c <= b || b + c <= a)
	{
		printf("输入有误，数值不符合构成三角形的条件\n");
		return 1;	
	}
	s = (a + b + c) / 2.0;
	area =  sqrt(s * (s -a) * (s -b) * (s - c));
	printf("三角形的面积为：%.2lf\n", area);
	return 0;
}
