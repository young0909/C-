#include <stdio.h>
int gcd(int a, int b)
{
     return a%b==0?b:gcd(b, a%b);
}
int main()
{
    int x, y;
    printf("请输入两个正整数\n");
    scanf("%d %d", &x, &y);
    printf("最大公约数:%d 最大公倍数:%d\n", gcd(x,y), x/gcd(x,y)*y);
    return 0;
} 
