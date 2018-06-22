#include <stdio.h>
int main()
{
   double  k;
   int i;
   double sum=0;
   for(i=1;i<=100;i+=1.0)
   {
      sum= sum+i;
      if(i<=50)
       sum=sum+1.0*i*i;
      if(i<=10)
       sum=sum+1.0/i;
   }
   printf("答案是：%.f\n", sum);
   return 0;
}
