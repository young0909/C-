#include <stdio.h>
#include <stdlib.h>
int main()
{
	double x, y;
	double h=10;
	double distance1, distance2,distance3,distance4;
	printf("请输入点的坐标x, y\n");
	scanf("%lf %lf", &x, &y);
	distance1=(2-x)*(2-x)+(2-y)*(2-y);
	distance2=(-2-x)*(-2-x)+(2-y)*(2-y);
	distance3=(2-x)*(2-x)+(-2-y)*(-2-y);
	distance4=(-2-x)*(-2-x)+(-2-y)*(-2-y);
	if(distance1<=1||distance2<=1||distance3<=1||distance4<=1)
		printf("高度:%.f\n", h);
	else
		printf("高度:0\n");
	return 0;
}
