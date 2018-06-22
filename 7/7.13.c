#include <stdio.h>
double P(int n, double x)
{
    if(n==0)
return 1;
    if(n==1)
return x;
    return ((2*n-1)*x-P(n-1, x)-(n-1)*P(n-2, x))/n;
}
int main()
{ 
   double x;
   int n;
   printf("请输入两个数\n");
   scanf("%lf %d", &x, &n);
   printf("最后的结果是%f\n", P(n, x));  
   return 0;
}
