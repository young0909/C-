#include <stdio.h>
int main()
{ 
	long long i, n,  sum=0;
	printf("请输入一个数:");
	scanf("%lld", &n);
	long long x=1;  
	for(i=1;i<=n;++i)
	{
		x*=i;
		sum=sum+x;
	}
	printf("答案是:%lld\n",sum);
	return 0;
}
