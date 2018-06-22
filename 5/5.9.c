#include <stdio.h>
void judge(int x)
{
	int i;
	int sum=0;
	for(i=1;i<x;++i)
	{
		if(x%i==0)
			sum+=i;
	}
	if(sum==x)
	{
		printf("%d factors are :", x);
		for(i=1;i<x;++i)
		{
			if(x%i==0)
				printf(" %d", i);
		} 
		printf("\n");
	}
	return ;
}
int main()
{  
        int i;
	printf("以下是完数\n"); 
	for(i=1;i<=1000;++i)
	{
		judge(i);
	}
	return 0;
} 
