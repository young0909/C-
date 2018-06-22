#include <stdio.h>
int main()
{  
    int a[3];
    printf("请输入三个数\n");
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    int t;    
    if(a[0]>a[1])
    {
        t=a[1];  
        a[1]=a[0];
        a[0]=t;
    }
    if(a[1]>a[2])
    {
        t=a[1];
        a[1]=a[2];
        a[2]=t;
    }
    if(a[0]>a[1])
    {
         t=a[1];
        a[1]=a[0];
        a[0]=t;
    }
    printf("%d %d %d\n", a[0], a[1], a[2]);
    return 0;
} 
