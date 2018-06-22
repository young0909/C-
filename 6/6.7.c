#include <stdio.h>
#include <math.h>
#define MAXN 20
int magic_str(int arr[MAXN][MAXN], int n)  
{
	int num = 0;
	int i = 0;
	int j = 0;
	int count = 1;
	j=n/2;
	for (num=1; num<=pow(n,2); num++)  //循环产生 1—n^2 的数。
	{
		if (i<0)        
		{
			i=n-1;
		}
		else if (j<0)
		{
			j=n-1;
		}
		else if (i>=n)
		{
			i=0;
		}
		else if (j>=n)
		{
			j=0;
		}
		arr[i--][j++]=num;     //确定 num=1的位置 arr[i][j]中的行列值 ，每次行数减一，列数加一
		if (num==(n*count))   //根据规律如果num==n的倍数  产生相应的i，j 值
		{
			i=i+2;
			j=j-1;
			count++;
		}
	}
	return 0;
}

void print_str(int arr[MAXN][MAXN], int n)
{
	int i = 0;
	int j = 0;
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			printf("%2d ",arr[i][j]);   //循环输出
		}
		printf("\n");
	}
}

int main ()
{
	int i;
	for(i=1;i<20;i+=2)
	{
	        int arr[MAXN][MAXN]={0};
		magic_str(arr, i);
		print_str(arr, i);
	} 
	return 0;
}
