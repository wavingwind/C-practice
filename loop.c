#include <stdio.h>

int main() {
	// do { } while (����)
	//int i = 1;
	//do {
	//	printf("Hello World %d\n", i++);
	//} while (i <= 10);

	// 2�� �ݺ���
	//for (int i = 2; i <= 9; i++)
	//{
	//	printf("%d��\n", i);
	//	for (int j = 1; j <= 9; j++)
	//	{
	//		printf("%d x %d = %d\n", i, j, i*j);
	//	}
	//	printf("\n");
	//}

	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j <= 4-i; j++)
	//	{
	//		printf(" ");
	//	}
	//	for (int k = 0; k <= i; k++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	// �Ƕ�̵带 �׾ƶ� ������Ʈ
	/*
	        **
	      ****** 
	    **********
	  **************
	******************
	*/
	int floor;
	printf("�� ������ �װڴ���?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		int w = i * 2 + 1;
		for (int j = 0; j < floor * 2 + 1 - w; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < 2 * w; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	

	//int floor;
	//printf("�� ������ �װڴ���?");
	//scanf_s("%d", &floor);
	//for (int i = 0; i < floor; i++)
	//{
	//	
	//	for (int j = 0; j < floor - i; j++)
	//	{
	//		printf(" ");
	//	}
	//	for (int k = 0; k < 2 * i + 1; k++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	return 0;
}