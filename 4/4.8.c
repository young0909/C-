#include <stdio.h>
int main()
{
	int n;
	printf("请输入一个值\n");	
	scanf("%d", &n);
	if(n<60)
		printf("成绩等级为:E\n");
	else if(n<70)
		printf("成绩等级为:D\n");
	else if(n<80)
		printf("成绩等级为:C\n");
	else if(n<90)
		printf("成绩等级为:B\n");
	else if(n<=100)
		printf("成绩等级为:A\n");
	else
		printf("wrong input\n");
	return 0;
}
