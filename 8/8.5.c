#include <stdio.h>
int vis[5];
int main()
{
	int i=1;
	int k=0;
	int c=3;
	for(;;)
	{
		if(c==1)
			break;
		if(!vis[i])
			k++;
		if(k==3)
		{
			vis[i]=1;
			i=0;
			k=0;
			c--;
		}
		i=(i+1)%3;
                if(i==0)
                i=3;
	}
	for(i=1;i<=3;++i)
		if(!vis[i])
			printf("最后在队伍里的号是%d\n", i);
	return 0;
}
