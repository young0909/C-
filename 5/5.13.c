#include <stdio.h>
int main()
{
   double x;
   printf("请输入一个数: \n");
   scanf("%lf", &x);
   double guess=x;
   int i;
   for(i=0;i<1000;++i)
   {
       guess=(guess+x/guess)/2;
   }
   printf("x的平凡根是%.5f\n", guess);
   return 0;
}
