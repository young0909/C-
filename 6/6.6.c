#include <stdio.h>
int c[100][100];
void init()
{
	int i, j;
	c[0][0]=1;
	for(i=1;i<10;i++)
	{   
		c[i][0]=1;
		for(j=0;j<10;++j)
		{ 
			c[i][j]=c[i-1][j]+c[i-1][j-1];
		}
	}
}
int main()
{ 
	int i, j;
	init();
	printf("杨辉三角的前十行\n");
	for(i=0;i<=9;++i)
	{
		for(j=0;j<=i;++j)
			printf("%d%c", c[i][j], j==i?'\n':' ');
	}
	return 0;
}
