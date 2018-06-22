#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int a[15][15];
int main()
{   
	int i, j, k;
	printf("随机生成的数组\n");
	srand(time(0)) ;  
	for(i=0;i<10;++i)
	{
		for(j=0;j<10;++j)
		{
			a[i][j]=rand()%100;
		}
	}
	for(i=0;i<10;++i)
		for(j=0;j<10;++j)
			printf("%d%c", a[i][j], j==9?'\n':' ');
	for(i=0;i<10;++i)
	{
		int Max=a[i][0];
		for(j=0;j<10;++j)
		{
			if(Max<a[i][j])
			{
				Max=a[i][j];
			}
		}
		for(j=0;j<10;++j)
		{
			if(a[i][j]==Max)
				for(k=0;k<10;++k)
				{ 
					if(a[i][j]>a[k][j])
						break;
				}
			if(k==10)
				printf("鞍点是%d\n", a[i][j]);
		}
	}
	return 0;
}
