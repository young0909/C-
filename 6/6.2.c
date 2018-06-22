#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int a[15];
int main()
{
	int i, j;
	srand(time(NULL));
	for(i=0;i<10;++i)
		a[i]=rand()%100;
	printf("以下是排序的十个数\n");
	for(i=0;i<10;i++)
		printf("%d%c", a[i],  i==9?'\n':' ');
	for(i=0;i<10;++i)
	{
		for(j=i+1;j<10;++j)
		{
			int t;
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("以下是排完序的十个数\n");
	for(i=0;i<10;++i)
		printf("%d%c", a[i],  i==9?'\n':' ');
	return 0;
}
