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
	printf("\n���سɹ���\n");
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
	printf("��������µ�����:");
	scanf("%d", &input);
	while (1)
	{
		if (input > random_num)
		{
			printf("�´���\n");
		}
		else if (input < random_num)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
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
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ��������������룡\n");
			break;
		}
	} while (input);
	return 0;
}