#include <stdio.h>
int a[105];
int main()
{ 
   int n, i, j;
   printf("请输入一个数\n");
   scanf("%d", &n);
   printf("请输入%d个数\n", n);
   for(i=1;i<=n;++i)
       scanf("%d", &a[i]);
   int m, t;
   scanf("%d", &m);
   j=0;
   for(i=n-m+1,j=1;j<=m; ++i,++j)
   {
       t=a[i];
       a[i]=a[j];
       a[j]=t;
   }
   printf("输出若干个整数\n");
   for(i=1;i<=n;++i)
      printf("%d ", a[i]);
   printf("\n");
   return 0;
}
