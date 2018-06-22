#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int a[10];
int main()
{
	int i, j;
	srand(time(0));
	printf("开始的十个数\n");
	for(i=0;i<10;++i)
	{
		a[i]=rand()%100;
		printf("%d ", a[i]);
	}
	for(i=0,j=9;i<j;i++,j--)
	{
		int t;
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	puts("");
	for(i=0;i<10;++i)
	{
		printf("%d ", a[i]);
	}
	puts("");
	return 0;
}
