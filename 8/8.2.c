#include  <stdio.h>
#include  <string.h>
char s1[105], s2[105], s3[105];
char t[105];
int main()
{  
	printf("请输入三个字符串\n");
	scanf("%s %s %s", s1, s2, s3);
	if(strcmp(s1,s2)>0)
	{
		strcpy(t,s1);  
		strcpy(s1,s2);
		strcpy(s2,t);
	}
	if(strcmp(s2,s3)>0)
	{   
		strcpy(t,s2); 
		strcpy(s2,s3);
		strcpy(s3,t);
	}

	if(strcmp(s1,s2)>0)
	{   
		strcpy(t,s1); 
		strcpy(s1,s2);
		strcpy(s2,t);
	}
	printf("%s %s %s\n", s1, s2, s3);
	return 0;
}
