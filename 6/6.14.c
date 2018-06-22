#include <stdio.h>
char s1[105], s2[105];
int main()
{
   printf("请输入两个字符串\n");
   fgets(s1,100,stdin);
   fgets(s2,100,stdin);
   int i=0;
   while(s1[i]!='\0'&&s2[i]!='\0')
   {
      if(s1[i]>s2[i]||s1[i]<s2[i])
           break;
      i++;
   }
   printf("最后结果为\n");
   if(s1[i]=='\0'&&s2[i]=='\0')
   {
       printf("0");
   }
   else
     printf("%d", s1[i]-s2[i]);
   printf("\n");
}
