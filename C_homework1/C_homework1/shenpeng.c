#include "stdio.h"

void introduce_shenpeng(void)
{
	printf("�ҽ�����\n���ã�������������ë��ƹ����\n���ָ��\n");
}


/* ��ϰforѭ�� */
/* �ڶ�����ҵ����1�ӵ�ָ������ָ�����ɿ���̨������������ĺ� */
#define COUNT_MAX 1000
void for_shenpeng(void)
{
	int count = 0;
	int i;
	int sum = 0;

	printf("ʵ�ֵĳ����ܣ������1�ӵ���ָ��������ӵĽ�������С�ָ��������Ҫ��������\n");
	printf("\n������%d���ڵ���\n", COUNT_MAX);
	scanf_s("%d", &count);

	if (count > COUNT_MAX || count == 1) {
		printf("������%d���ڵ���,�Ҵ���1\n", COUNT_MAX);
		return;
	}
	for (i = 1; i <= count; i++) {
		sum = sum + i;
	}
	printf("1+..+%d = %d\n", count, sum);
}

