#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int n;
	printf("请输入一个值\n");	
	while(~scanf("%d", &n))
	{
		if(n>1000||n<=0)
		{
			printf("请重新输入\n");
			continue;
		} 
		printf("%d\n", (int)sqrt((double)n));
		printf("请输入一个值\n");
	}    
	return 0;
}
