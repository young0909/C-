#include <stdio.h>
int main()
{
	int x, y;
        printf("请输入一个值\n");	
        scanf("%d", &x);
	if(x<1)
		printf("%d\n", x);
	else if(x<10)
		printf("%d\n", 2*x-1);
	else
		printf("%d\n", 3*x-11);
	return 0;
}
