#include <stdio.h>
int main(void)
{
	 //������ ������ ���� ����
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	// �Ǽ��� ������ ���� ����
	/*float f = 46.5f; printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);*/

	// ���
	//const int YEAR = 2000;
	//printf("�¾ �⵵ : %d\n", YEAR);

	// priintf
	// ����
	/*int add = 3 + 7;
	printf("3+7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3+7);*/

	// scanf
	// Ű���� ���� �Է¹޾Ƽ� ����
	//int input;
	//printf("���� �Է��ϼ��� : ");
	//scanf_s("%d", &input);
	//printf("�Է°� : %d\n", input);

	//int one, two, three;
	//printf("3���� ���� �Է��ϼ��� : ");
	//scanf_s("%d %d %d", &one, &two, &three);
	//printf("%d, %d, %d\n", one, two, three);

	// ����
	//char c = 'A';
	//printf("%c\n", c);

	//char str[256];
	//scanf_s("%s", str, sizeof(str));
	//printf("%s\n", str);

	//������Ʈ
	// �������� �������� ������ �Լ� (�����ۼ�)
	// �̸�, ����, ������,Ű, ���˸�
	printf("�̸��� ����?\n");
	char name[256];
	scanf_s("%s", name, sizeof(name));

	printf("���̰� ����?\n");
	int age;
	scanf_s("%d", &age);

	printf("�����԰� �� kg�̴�?\n");
	float weight;
	scanf_s("%f", &weight);

	printf("Ű�� �� cm�̴�?\n");
	double height;
	scanf_s("%lf", &height);

	printf("���� �߸��� �ߴ�?\n");
	char crime[256];
	scanf_s("%s", crime, sizeof(crime));

	printf("�̸� : %s, ���� : %d, ������ : %.2f, Ű : %.2lf, ���˸� : %s", name, age, weight, height, crime);

	return 0;
}