#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int a[15];
int main()
{
	int i, j, x;
	srand(time(NULL));
	for(i=0;i<10;++i)
		a[i]=rand()%100;
	printf("请输入一个数\n");
	scanf("%d", &x);
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
	a[10]=x;        
	for(i=9;i>=0;i--)
	{
		if(x<a[i])
		{
			a[i+1]=a[i];
			a[i]=x;
		} 
		else
			break;
	}
	for(i=0;i<=10;++i)
		printf("%d%c", a[i],  i==10?'\n':' ');
	return 0;
}
