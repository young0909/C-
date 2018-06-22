#include <stdio.h>
double calc(double mid)
{
    return 2*mid*mid*mid-4*mid*mid+3*mid-6;
}
int main()
{ 
   double l=-10, r=10;
   while(r-l>0.000001)
   {
       double mid=(l+r)/2;
       if(calc(mid)>0)
        r=mid;
       else if(calc(mid)<=0)
        l=mid;
   }
   printf("方程的根是%f\n", l);
   return 0;
}
