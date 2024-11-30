#include <stdio.h>

int main(void){
    //변수 선언
    int choice;
    float area, length;
    float a, b;

    /*put your answer*/
    do{
        printf("정사각형 계산은 1번, 직사각형 계산은 2번을 입력하세요: ");
        scanf("%d", &choice);
        //정사각형인 경우:
        if (choice == 1){
            printf("정사각형의 한 변의 길이를 입력하세요: ");
            scanf("%f", &a);
            area = a*a;
            length = 4*a;
            printf("정사각형의 면적: %.2f\n",area);
	        printf("정사각형의 둘레의 길이: %.2f\n",length);
            break;
        }
        //직사각형인 경우:
        else if (choice == 2) {
            printf("직사각형의 두 변의 길이를 입력하세요: ");
            scanf("%f %f", &a, &b);
            area = a*b;
            length = 2*(a+b);
            printf("직사각형의 면적: %.2f\n",area);
            printf("직사각형의 둘레의 길이: %.2f\n",length);
            break;      
        }
    } while(choice != 1 || choice != 2);

    /*입출력 형식은 다음 코드를 복사해서 이용
    //변수 입력받기
    printf("정사각형 계산은 1번, 직사각형 계산은 2번을 입력하세요: ");
    scanf("%d", 변수);
    
    //정사각형인 경우:
    printf("정사각형의 한 변의 길이를 입력하세요: ");
    scanf("%f", 변수);
    printf("정사각형의 면적: %.2f\n",area);
	printf("정사각형의 둘레의 길이: %.2f\n",length);
    
    //직사각형인 경우:
    printf("직사각형의 두 변의 길이를 입력하세요: ");
    scanf("%f %f", 변수, 변수);
    printf("직사각형의 면적: %.2f\n",area);
    printf("직사각형의 둘레의 길이: %.2f\n",length);      
    */
    
    return 0;
}
