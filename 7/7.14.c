#include <stdio.h>
struct stu{
	int class[5];
}a[15];
int main()
{  
	int j,i;
	printf("请输入十个学生的5门课成绩\n");
	for(i=0;i<10;++i)
		scanf("%d %d %d %d %d", &a[i].class[0], &a[i].class[1], &a[i].class[2], &a[i].class[3], &a[i].class[4]);
	printf("学生的平均分是\n");
	for(i=0;i<10;++i)
		printf("第%d个学生的平均分是=%f\n", i, (a[i].class[0]+a[i].class[1]+a[i].class[2]+a[i].class[3]+a[i].class[4])*1.0/5);
	for(j=0;j<5;++j)
	{
		double sum=0;
		for(i=0;i<10;++i)
		{
			sum+=a[i].class[j];
		}
		printf("第%d门课的平均分是%f\n", i,  sum/10);
	}
	int Max=-1, id=-1, class=-1; 
	for(j=0;j<5;++j)
	{
		for(i=0;i<10;++i)
		{
			if(a[i].class[j]>Max)
			{
				Max=a[i].class[j];
				id=i;
				class=j;
			}
		}
	}
        printf("成绩最好的学生id是%d 第%d门课 成绩是 %d\n", id, class, Max);
        double p1=0, p2=0, ans=0;
        for(i=0;i<10;++i)
           p1 += (a[i].class[0]+a[i].class[1]+a[i].class[2]+a[i].class[3]+a[i].class[4])*1.0/5;
        for(i=0;i<10;++i)
           p2 += (a[i].class[0]+a[i].class[1]+a[i].class[2]+a[i].class[3]+a[i].class[4])*1.0/5*(a[i].class[0]+a[i].class[1]+a[i].class[2]+a[i].class[3]+a[i].class[4])*1.0/5;
        printf("方差是%f\n",p2/10-(p1/10)*(p1/10));
	return 0;
} 
