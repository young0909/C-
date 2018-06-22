#include <stdio.h>
int main()
{
	int n;
	int len=0;
	int tmp;
	printf("请输入一个整数\n");
	scanf("%d", &n);
	tmp=n;
	while(tmp)
	{ 
		tmp=tmp/10;
		len++;
	}
	printf("长度为：%d\n", len);
	tmp=n;
	printf("每一位数字为\n");
	while(tmp)
	{
		printf("%d\n", tmp%10);
		tmp/=10;
	}
	tmp=n;
        printf("逆序数:");
	while(tmp)
	{
		printf("%d", tmp%10);
		tmp/=10;
	}
	printf("\n");
	return 0;
}
