#include "stdio.h"

/* 第一次作业：简单介绍自己 */
void introduce_zhangsan(void)
{
	printf("我叫张三，我喜欢吃饭、睡觉、打豆豆\n");
}

/* 练习for循环 */
/* 第二次作业：找出指定数以内的所有偶数 */
void for_zhangsan(void)
{
	int n = 0; // 定义“指定的数”变量
	int i;
	printf("找出指定数以内的偶数，其中“指定的数”需要输入,注意指定数不能超过10000\n");
	scanf_s("%d", &n);
	if (n > 10000) {
		printf("请输入10000以内的指定的数\n");
		return;
	}
	printf("%d以内的偶数为：\n", n);
	for (i = 0; i < n; i++) {
		if (i % 2 == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

