#define __STDC_WANT_LIB_EXT1__ 1
#include<stdio.h>
#include<limits.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char input[] = { "������" };
	system("shutdown -s -t 60");//һ���Ӻ�ػ�
again:
	printf("�����룺�������������һ���Ӻ�ػ���\n");
	scanf_s("%s",input,sizeof(input));
	if (strcmp(input, "������")== 0)//�ж�������ǲ���������
	{
		system("shutdown -a");
	}
	else
	{
		goto again;

	}
	return 0;
}