#include "stdio.h"

void introduce_shenpeng(void)
{
	printf("我叫申鹏\n爱好：看动漫、打羽毛球、乒乓球\n请多指教\n");
}


/* 练习for循环 */
/* 第二次作业：从1加到指定数（指定数由控制台中输入而来）的和 */
#define COUNT_MAX 1000
void for_shenpeng(void)
{
	int count = 0;
	int i;
	int sum = 0;

	printf("实现的程序功能：计算从1加到“指定数”相加的结果，其中“指定数”需要进行输入\n");
	printf("\n请输入%d以内的数\n", COUNT_MAX);
	scanf_s("%d", &count);

	if (count > COUNT_MAX || count == 1) {
		printf("请输入%d以内的数,且大于1\n", COUNT_MAX);
		return;
	}
	for (i = 1; i <= count; i++) {
		sum = sum + i;
	}
	printf("1+..+%d = %d\n", count, sum);
}

