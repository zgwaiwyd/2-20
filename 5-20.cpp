#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>0
int main()
{
	char input[20] = { 0 };
	//shutdown-s -t 60
	//system()-ִ��ϵͳ�����
	system("shutdown -s -t 60");
	//	system("shutdown -r -t 60");//������
	//	system("shutdown -l -t 60");//ע��
agin:
	printf("��簮�㣬��ע�⣬��ĵ�����һ�����ڹػ��������룺  ��Ҳ�����  ��ȡ���ػ�\n������>:");
	scanf("%s", input);
	if (strcmp(input, "��Ҳ�����") == 0)//�Ƚ������ַ���-strcmp()
	{
		system("shutdown -a");
	}
	else
	{
		goto agin;
	}
	return 0;

}