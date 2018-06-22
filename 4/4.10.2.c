#include <stdio.h>
int main()
{
	int I;
	printf("请输入存款\n");	
	scanf("%d", &I);
	double ans;
	double t1, t2, t4, t6, t10;
	t1=100000*0.1;
	t2=t1+100000*0.075;
	t4=t2+200000*0.05;
	t6=t4+200000*0.03;
	t10=t6+400000*0.015;
	int block=I/100000;
	if(block>10)
		block=10;         
	switch(block)
	{
		case 0:ans=I*0.1; break;
		case 1:ans=t1+(I-100000)*0.075;break;
		case 2:
		case 3:ans=t2+(I-200000)*0.05;break;
		case 4:
		case 5:ans=t4+(I-400000)*0.03;break;
		case 6:
		case 7:
		case 8:
		case 9:ans=t6+(I-600000)*0.015;break;
		case 10:ans=t10+(I-1000000)*0.01;
	}
	printf("奖金是: %.f\n", ans);
	return 0;
}

