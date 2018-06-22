#include <stdio.h>
int main()
{
    int i, ans=1;
    for(i=1;i<=10;++i)
    {
       ans=(ans+1)*2;
    }
    printf("猴子第一天吃了%d个桃子\n", ans);
}
