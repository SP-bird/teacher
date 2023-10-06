#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "func.h"

#define STR_LEN_MAX  32
struct func_process {
	char num[STR_LEN_MAX];
	char name[STR_LEN_MAX];
	void(*func)(void);
};

struct func_process func_homework[] = {
	/* 以下为第一次作业 */
	{"第一次作业", "申鹏", introduce_shenpeng},
	{"第一次作业", "张三", introduce_zhangsan},
	{"第一次作业", "李四", introduce_lisi},

	/* 以下为第二次作业 */
	{"第二次作业", "申鹏", for_shenpeng},
	{"第二次作业", "张三", for_zhangsan},
};

void all_homework(void)
{
	int i;
	printf("作业提交名单(总次数： %d)：\n", sizeof(func_homework) / sizeof(struct func_process));
	for (i = 0; i < sizeof(func_homework) / sizeof(struct func_process); i++){
		printf("%s %s\n", func_homework[i].num, func_homework[i].name);
	}
}

void cwork_usage(void)
{
	printf("--------------- 命令使用方法 --------------\n");
	printf("1.查看命令帮助: cmd help\n");
	printf("2.进入某个作业命令：【第n次作业】 【姓名】\n");
	printf("3.查看所有作业名单命令： all homework\n");
	printf("4.退出命令行： cmd exit\n");
	printf("3.查看所有学生的第一次作业： first homework\n");
	printf("-------------------------------------------\n");
}

void find_firstwork_all()
{
	int i;
	int index = 1;
	for (i = 0; i < sizeof(func_homework) / sizeof(struct func_process); i++) {
		if (strcmp("第一次作业", func_homework[i].num) == 0) {
			printf("\n序号%d：\n", index);
			func_homework[i].func();
			index++;
		}
	}
}

void clear_input_buffer(void)
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{
	char num[STR_LEN_MAX] = {0};
	char name[STR_LEN_MAX] = {0};
	int i;
	bool cmd_valid_flag = 0;

	printf("\n*****************************************\n");
	printf("*         一起学习c语言(AIIT)           *\n");
	printf("*****************************************\n");
	cwork_usage();

	while (1) {
		cmd_valid_flag = 0;
		printf("<AIIT>");
		memset(num, 0, STR_LEN_MAX);
		memset(name, 0, STR_LEN_MAX);
		scanf_s("%s %s", num, STR_LEN_MAX, name, STR_LEN_MAX);

		for (i = 0; i < sizeof(func_homework) / sizeof(struct func_process); i++) {
			if (strcmp(num, func_homework[i].num) == 0) {
				if (strcmp(name, func_homework[i].name) == 0) {
					func_homework[i].func();
					cmd_valid_flag = 1;
				}
			}
		}

		if (strcmp(num, "all") == 0) {
			if (strcmp(name, "homework") == 0) {
				all_homework();
				cmd_valid_flag = 1;
			}
		}

		if (strcmp(num, "first") == 0) {
			if (strcmp(name, "homework") == 0) {
				find_firstwork_all();
				cmd_valid_flag = 1;
			}
		}

		if (strcmp(num, "cmd") == 0) {
			if (strcmp(name, "help") == 0) {
				cwork_usage();
				cmd_valid_flag = 1;
			}
			if (strcmp(name, "exit") == 0) { // 输入结束命令，跳出循环
				break;
			}
		}

		if (!cmd_valid_flag) {
			printf("没有此命令！命令参考：\n");
			clear_input_buffer();
			cwork_usage();
		}

	}
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
