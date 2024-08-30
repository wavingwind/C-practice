#include <stdio.h>
int main(void)
{
	 //정수형 변수에 대한 예제
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	// 실수형 변수에 대한 예제
	/*float f = 46.5f; printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);*/

	// 상수
	//const int YEAR = 2000;
	//printf("태어난 년도 : %d\n", YEAR);

	// priintf
	// 연산
	/*int add = 3 + 7;
	printf("3+7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3+7);*/

	// scanf
	// 키보드 값을 입력받아서 저장
	//int input;
	//printf("값을 입력하세요 : ");
	//scanf_s("%d", &input);
	//printf("입력값 : %d\n", input);

	//int one, two, three;
	//printf("3개의 값을 입력하세요 : ");
	//scanf_s("%d %d %d", &one, &two, &three);
	//printf("%d, %d, %d\n", one, two, three);

	// 문자
	//char c = 'A';
	//printf("%c\n", c);

	//char str[256];
	//scanf_s("%s", str, sizeof(str));
	//printf("%s\n", str);

	//프로젝트
	// 경찰관이 범죄자의 정보를 입수 (조서작성)
	// 이름, 나이, 몸무게,키, 범죄명
	printf("이름이 뭐니?\n");
	char name[256];
	scanf_s("%s", name, sizeof(name));

	printf("나이가 뭐니?\n");
	int age;
	scanf_s("%d", &age);

	printf("몸무게가 몇 kg이니?\n");
	float weight;
	scanf_s("%f", &weight);

	printf("키는 몇 cm이니?\n");
	double height;
	scanf_s("%lf", &height);

	printf("무슨 잘못을 했니?\n");
	char crime[256];
	scanf_s("%s", crime, sizeof(crime));

	printf("이름 : %s, 나이 : %d, 몸무게 : %.2f, 키 : %.2lf, 범죄명 : %s", name, age, weight, height, crime);

	return 0;
}