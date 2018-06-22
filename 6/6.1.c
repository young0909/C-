#include <stdio.h>
int vis[105];
int main()
{
	int i, j;
	vis[0]=vis[1]=1;
	for(i=2;i<=100;++i)
	{
		if(!vis[i])
		{
			for(j=i+i;j<=100;j+=i)
			{
				vis[j]=1;
			}
		}
	}
	printf("100以内的素数有\n");
	for(i=2;i<=100;++i)
		if(!vis[i])
			printf("%d ", i);
	printf("\n");
	return 0;
}
