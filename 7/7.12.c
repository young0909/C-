#include <stdio.h>
int main()
{
   double x=1;
   int i=0;
   printf("请输入4个数\n");
   int a, b, c, d;
   scanf("%d %d %d %d", &a, &b, &c, &d);
   for(i=0;i<100000;++i)
    x=(2*x*x*x+2*x*x-4)/(3*x*x+4*x+3);
   printf("靠近1的方程解是%f\n", x);
   return 0;
}
