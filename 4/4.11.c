#include <stdio.h>
int main()
{
	int a[5];
	int i;
	int j;
	printf("请输入四个整数\n");
	for(i=0;i<4;++i)
		scanf("%d", &a[i]);
	for(i=0;i<4;++i)
	{
		for(j=i+1;j<4;++j)
		{
			int tmp;
			if(a[i]>a[j])
			{
				tmp=a[i]; 
				a[i]=a[j];
				a[j]=tmp;
			} 
		}
	}
        printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
}
