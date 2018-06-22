#include <stdio.h>
char s1[105], s2[105];
int main()
{ 
    printf("请输入两个字符串\n");
    scanf("%s %s", s1, s2);
    int i=0;
    while(s2[i]!='\0')
    {
        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0';
    printf("字符串s1为：%s\n", s1);
    return 0;
}
