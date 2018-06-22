#include <stdio.h>
int a[15];
int main()
{
	int i;
	printf("请输入10个数\n");
	for(i=1;i<=10;++i)
		scanf("%d", &a[i]);
	int id=-1;        
	int Min=0x3f3f3f3f;
	int Max=-0x3f3f3f3f;
	for(i=1;i<=10;++i)
	{
		if(Min>a[i])
		{
			Min=a[i];
			id=i;
		}
	}
	int t=a[id];
	a[id]=a[1];
	a[1]=t;
	for(i=1;i<=10;++i)
	{
		if(Max<a[i])
		{
			Max=a[i];
			id=i;        
		}
	}
        t=a[id];
        a[id]=a[10];
        a[10]=t;
        for(i=1;i<=10;++i)
        printf("%d%c", a[i], i==10?'\n':' ');
	return 0;
}
