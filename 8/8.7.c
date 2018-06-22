#include <stdio.h>
void solve(char s1[], int m)
{
    int i=0;
char s2[15];
   for(i=m-1;s1[i];++i)
   {
      s2[i-m+1]=s1[i];
   }
   s2[i-m+1]='\0';
   printf("结果是");
   puts(s2);
}
int main()
{  
    int m;
    char s1[15];
    printf("请输入一个字符串和一个数\n");
     scanf("%s %d", s1, &m);
    solve(s1, m);
    
    return 0;
}
