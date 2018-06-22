#include <stdio.h>
#include <ctype.h>
#include <string.h>
char str[1005];
char ans[1005];
int main()
{ 
	int i;
	printf("请输入密文\n");
	fgets(str, 1005, stdin);
	for(i=0;str[i]!='\0';++i)
	{ 
		if(islower(str[i]))
			ans[i]=26+'a'-str[i]-1+'a';
		if(isupper(str[i]))
			ans[i]=26+'A'-str[i]-1+'A'; 
	}
	printf("密文：");
	puts(str);
	printf("明文: ");
	puts(ans);
	return 0;
}
