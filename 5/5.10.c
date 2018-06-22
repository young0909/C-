#include <stdio.h>
int main()
{
   double sum=0;
   double x=1, y=2, t;
   printf("以下是前20项的和\n");
   for(int i=1;i<=20;++i)
   {
      sum+=y/x;
      t=x;
      x=y;
      y=t+x;
   }
   printf("%f\n", sum);
}
