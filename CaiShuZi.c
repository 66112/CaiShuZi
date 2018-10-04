#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
#include <time.h>
void Loading()
{
	int i = 0;
	char bar[101];
	memset(bar, 0, sizeof(bar));
	char* lable = "|/-\\";
	while (i <= 100)
	{
		printf("[%-100s][%d%%][%c]\r", bar, i, lable[i % 4]);
		fflush(stdout);
		bar[i++] = '#';
		Sleep(100);
	}
	printf("\n加载成功！\n");
}
void menu()
{
	printf("****************************\n");
	printf("**********  1.play   *******\n");
	printf("**********  0.exit   *******\n");
	printf("****************************\n");
}
void game()
{
	Loading();
	int random_num = rand() % 100 + 1;
	int input = 0;
	printf("请输入你猜的数字:");
	scanf("%d", &input);
	while (1)
	{
		if (input > random_num)
		{
			printf("猜大了\n");
		}
		else if (input < random_num)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}