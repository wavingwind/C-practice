#include <stdio.h>

int main(void)
{
    //변수 선언
    int parking_time, discount, parking_fee;        

    /*put your answer*/
    do{
        printf("주차 시간과 할인권 갯수를 입력하세요(주차 시간, 할인권 갯수): ");
        scanf("%d %d", &parking_time, &discount);

        if(parking_time > 1440){
            printf("주차 시간은 최대 24시간(1440분)을 넘을 수 없습니다.\n");
        }
        if(discount > 3){
            printf("할인권은 3장까지 사용 가능합니다.\n");
        }
    } while (parking_time > 1440 || discount > 3);
    
    if (parking_time <= 30){
        parking_fee = 2000 - 5000*discount;
    }
    else{
        if(parking_time%10 == 0){
            parking_fee = (2000 + (((parking_time-30)/10) * 1000)) - (5000*discount);
        }
        else{
            parking_fee = ((2000 + (((parking_time-30)/10)+1) * 1000)) - (5000*discount);
        }
    }

    if(parking_fee < 0){
        parking_fee = 0;
    }
    else if(parking_fee > 25000){
        parking_fee = 25000;
    }

    printf("총 주차 요금은 %d원입니다.\n", parking_fee);

    /*입력시 다음 코드를 복사해서 사용
    printf("주차 시간과 할인권 갯수를 입력하세요(주차 시간, 할인권 갯수): ");
    scanf("%d %d", &parking_time, &discount);
    */
    
    /*출력시 반드시 다음 출력문을 복사해서 사용
    1. 주차 시간이 24시간(1440분)을 넘는 경우 다음 문장 출력하고 다시 입력 받음
    printf("주차 시간은 최대 24시간(1440분)을 넘을 수 없습니다.\n"); 
    2. 할인권 갯수가 3개를 초과하는 경우 다음 문장 출력하고 다시 입력 받음
    printf("할인권은 3장까지 사용 가능합니다.\n");
    3. 총 주차 요금은 다음 문장을 이용하여 출력
    printf("총 주차 요금은 %d원입니다.\n", parking_fee);
    */

    return 0;
}
