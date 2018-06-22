#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int a[20];
int main()
{
	int i,x;
	srand(time(NULL));
	a[0]=rand()%100000000+1111111111;
	printf("随机生成的有序数组\n");
	for(i=1;i<15;++i)
        {
             if(a[i-1]!=0)
	     a[i]=rand()%a[i-1];
             else
               a[i]=0;
	}
        for(i=0;i<15;++i)
		printf("%d ", a[i]);
	printf("\n请输入一个数\n");
	scanf("%d", &x);
	int l=0, r=14;     
	int f=-1;  
	while(l<=r)
	{
		int mid= (l+r)/2;
		if(a[mid]==x)
		{
			f=mid;
                        break;
		}
                else if(a[mid]<x)
                r=mid-1;
                else
                l=mid+1;
	}
        if(f==-1)
            printf("无此数\n");
        else
            printf("该数的下标为%d\n", f);
	return 0;
}
