#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define  MAXN 100
char s1[MAXN], s2[MAXN], s3[MAXN];
int Alpha, alpha, digit,space,other;
void Count(char str[])
{    
    int i;
    for(i=0;i<strlen(str);++i)
    {
         if(islower(str[i]))
           alpha++; 
         else if(isupper(str[i]))
           Alpha++;
         else if(isdigit(str[i]))
           digit++;
         else if(str[i]==' ')
          space++;
         else
          other++;
    }
}
int main()
{ 
   printf("请输入文章内容\n");
   fgets(s1, 80, stdin);   
   fgets(s2, 80, stdin);   
   fgets(s3, 80, stdin);   
   Alpha=0, alpha=0, digit=0,space=0,other=0;
   Count(s1);
   Count(s2);
   Count(s3);
   printf("大写英文字母:%d 小写英文字母:%d 数字个数:%d 空格个数:%d 其他字符:%d\n", Alpha, alpha, digit, space, other);
   return 0;
}
