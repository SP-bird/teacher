#include "stdio.h"

/* ��һ����ҵ���򵥽����Լ� */
void introduce_zhangsan(void)
{
	printf("�ҽ���������ϲ���Է���˯�����򶹶�\n");
}

/* ��ϰforѭ�� */
/* �ڶ�����ҵ���ҳ�ָ�������ڵ�����ż�� */
void for_zhangsan(void)
{
	int n = 0; // ���塰ָ������������
	int i;
	printf("�ҳ�ָ�������ڵ�ż�������С�ָ����������Ҫ����,ע��ָ�������ܳ���10000\n");
	scanf_s("%d", &n);
	if (n > 10000) {
		printf("������10000���ڵ�ָ������\n");
		return;
	}
	printf("%d���ڵ�ż��Ϊ��\n", n);
	for (i = 0; i < n; i++) {
		if (i % 2 == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

