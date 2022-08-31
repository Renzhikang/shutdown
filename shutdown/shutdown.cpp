#define __STDC_WANT_LIB_EXT1__ 1
#include<stdio.h>
#include<limits.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char input[] = { "我是猪" };
	system("shutdown -s -t 60");//一分钟后关机
again:
	printf("请输入：我是猪，否则电脑一分钟后关机！\n");
	scanf_s("%s",input,sizeof(input));
	if (strcmp(input, "我是猪")== 0)//判断输入的是不是我是猪
	{
		system("shutdown -a");
	}
	else
	{
		goto again;

	}
	return 0;
}