#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void menu()
{
	printf("---------------------------\n");
	printf("---   1.play  0.exit   ----\n");
	printf("---------------------------\n");
}
void game()
{

}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��0/1����");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}