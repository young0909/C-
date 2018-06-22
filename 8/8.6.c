#include <stdio.h>
int get_len(char str[])
{
    int i=0;
    while(str[i]!='\0')
    i++;
    return i;
}
int main()
{ 
    int i=0;
    char str[15]={};
    printf("请输入一个字符串\n");
    scanf("%s", str);
    printf("长度是%d\n", get_len(str));
    return 0;
}
