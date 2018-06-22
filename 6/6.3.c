#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int a[5][5];
int main()
{
int i,j,sum=0;
srand(time(NULL));
   for(i=0;i<3;++i)
   {
      for(j=0;j<3;++j)
      {
          a[i][j]=rand()%100; 
      }
   }
   sum=a[0][0]+a[1][1]+a[2][2];
   printf("对角线的和是%d\n", sum);
   return 0;
}
