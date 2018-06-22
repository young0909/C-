#include <stdio.h>
int main()
{
   int n, a, i;
   printf("请输入位数和一个数\n");
   scanf("%d %d", &n, &a);
   int sum=0;
    for(i=0;i<n;++i)
    {
       sum+=a;
       a=a*10+a;
    }
   printf("答案是:%d\n", sum);
   return 0;
}
