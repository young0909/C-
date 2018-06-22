#include <stdio.h>
int judge(int x)
{
	int a=x%10;
	int b=x/10%10;
	int c=x/100%10;
	if(a*a*a+b*b*b+c*c*c==x)
		return 1;
	else 
		return -1;
}
int main()
{  
	printf("以下是水仙花数\n");
	for(int i=100;i<=999;++i)
	{
		if(judge(i)==1)
		{  
			printf("%d 是水仙花数\n",  i);
		}
	}
	return 0;
}
