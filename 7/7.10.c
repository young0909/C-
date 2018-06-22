#include <stdio.h>
#include <string.h>
char s[105], str[105];
char ans[105];
int main()
{ 
	printf("请输入一行\n");
	fgets(s, 100, stdin);
	int len=0;
	char *p=s;
	while(*p==' ')
		p++;
	while(sscanf(p, "%s", str)!=EOF)
	{
		if(strlen(str)>len)
		{
			len=strlen(str);
			strncpy(ans, str,len);
		}
		p=p+strlen(str);
		while(*p==' ')
			p++;
	}
	printf("最长的字符串是%s\n", ans);
	return 0;
}
