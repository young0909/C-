#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXN 1005
int main()
{
	char str[MAXN]={};
	printf("请输入一行字符\n");
	int digit, alpha=0, space=0, other=0;
	fgets(str, MAXN,stdin);
        for(int i=0;str[i];++i)
	{
		if(isdigit(str[i]))
			digit++;
		else if(isalpha(str[i]))
			alpha++;
		else if(str[i]==' ')
			space++;
		else
			other++;

	}
        printf("数字的个数:%d 字符的个数:%d 空格的个格:%d 其他字符:%d\n",digit, alpha, space, other);
	return 0;
}
