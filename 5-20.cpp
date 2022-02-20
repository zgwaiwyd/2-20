#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>0
int main()
{
	char input[20] = { 0 };
	//shutdown-s -t 60
	//system()-执行系统命令的
	system("shutdown -s -t 60");
	//	system("shutdown -r -t 60");//重启动
	//	system("shutdown -l -t 60");//注销
agin:
	printf("哥哥爱你，请注意，你的电脑在一分钟内关机，请输入：  我也爱哥哥  可取消关机\n请输入>:");
	scanf("%s", input);
	if (strcmp(input, "我也爱哥哥") == 0)//比较两个字符串-strcmp()
	{
		system("shutdown -a");
	}
	else
	{
		goto agin;
	}
	return 0;

}