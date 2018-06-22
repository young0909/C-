#include <stdio.h>
char s1[205], s2[105];
int main()
{   
    printf("请输入两个字符串\n");
    scanf("%s %s", s1, s2);
    int i, j;
    for(i=0;s1[i];++i);
    for(j=0;s2[j];j++, i++)
     s1[i]=s2[j];
    s1[i]='\0';
    printf("连接后的字符串是%s\n", s1);
    return 0;
}
