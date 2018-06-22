#include <stdio.h>
char a[15];
int main()
{
    printf("请输入十个字符\n");
    int i, j;
    for(i=0;i<10;++i)
      scanf(" %c", &a[i]);
     for(i=0;i<10;++i)
     {
         for(j=0;j<10-i-1;++j)
         {
             if(a[j]>a[j+1])
             {
                 int t=a[j];
                 a[j]=a[j+1]; 
                 a[j+1]=t;
             }
         }
     }
     for(i=0;i<10;++i)
         printf("%c ", a[i]);
     printf("\n");
}
