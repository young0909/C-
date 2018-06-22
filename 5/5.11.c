#include <stdio.h>
int main()
{
   double h=100;
   double sum=0;
   int i;
   for(i=1;i<=10;++i)
   { 
       sum+=h;
       h/=2;
   }      
   printf("总共经过：%f 第十次的反弹高度为%f\n", sum*2-100, h*2);
}
