#include <stdio.h>
#include <string.h>

/* 변수 선언 부분: 수정하지 마세요 */
#define price_americano 3500
#define price_icetea 3000
#define price_smoothie 5000
#define price_carrot 7000
#define price_cheese 6000
#define price_choco 5500
/* ------------------------------ */

int main(){
    /* 변수 선언 부분: 수정하지 마세요 */
    int num_americano;
    int num_icetea;
    int num_smoothie;
    int num_carrot;
    int num_cheese;
    int num_choco;
    int num_set1;
    int num_set2;
    int total_price_set1;
    int total_price_set2;
    int total_price;
    /* ------------------------------ */

    // 반드시 다음 코드 사용해서 출력하세요. 
    // 주문 받을 때: printf("주문하고자 하는 음료(커피, 아이스티, 스무디)와 케잌(당근, 치즈, 초코)의 갯수를 각각 입력하세요:\n"); 이용하여 출력
    // 음료 갯수가 10개 넘었을 때: printf("음료 갯수가 10개를 넘었습니다. 다시 주문해주세요.\n\n"); 이용하여 출력
    // 케잌 갯수가 10개 넘었을 때: printf("케잌 갯수가 10개를 넘었습니다. 다시 주문해주세요.\n\n"); 이용하여 출력
    
    /*put your answer*/
    while (1) {
        printf("주문하고자 하는 음료(커피, 아이스티, 스무디)와 케잌(당근, 치즈, 초코)의 갯수를 각각 입력하세요:\n");
        scanf("%d %d %d %d %d %d", &num_americano, &num_icetea, &num_smoothie,
              &num_carrot, &num_cheese, &num_choco);

        int total_beverages = num_americano + num_icetea + num_smoothie;
        int total_cakes = num_carrot + num_cheese + num_choco;

        if (total_beverages > 10) {
            printf("음료 갯수가 10개를 넘었습니다. 다시 주문해주세요.\n\n");
            continue;
        }
        if (total_cakes > 10) {
            printf("케잌 갯수가 10개를 넘었습니다. 다시 주문해주세요.\n\n");
            continue;
        }
        break;
    }

    // Set 1
    while ((num_americano + num_icetea + num_smoothie) >= 2 &&
           (num_carrot + num_cheese + num_choco) >= 2) {

        num_set1++;

        int beverage_prices[] = {price_americano, price_icetea, price_smoothie};
        int beverage_counts[] = {num_americano, num_icetea, num_smoothie};

        int cake_prices[] = {price_carrot, price_cheese, price_choco};
        int cake_counts[] = {num_carrot, num_cheese, num_choco};

        int selected_beverages_cost = 0;
        for (int i = 0; i < 2; i++) {
            int max_index = -1;
            for (int j = 0; j < 3; j++) {
                if (beverage_counts[j] > 0 && (max_index == -1 || beverage_prices[j] > beverage_prices[max_index])) {
                    max_index = j;
                }
            }
            if (max_index != -1) {
                selected_beverages_cost += beverage_prices[max_index];
                beverage_counts[max_index]--;
            }
        }

        int selected_cakes_cost = 0;
        for (int i = 0; i < 2; i++) {
            int max_index = -1;
            for (int j = 0; j < 3; j++) {
                if (cake_counts[j] > 0 && (max_index == -1 || cake_prices[j] > cake_prices[max_index])) {
                    max_index = j;
                }
            }
            if (max_index != -1) {
                selected_cakes_cost += cake_prices[max_index];
                cake_counts[max_index]--;
            }
        }

        total_price_set1 += (selected_beverages_cost + selected_cakes_cost) * 0.8;
        
        num_americano = beverage_counts[0];
        num_icetea = beverage_counts[1];
        num_smoothie = beverage_counts[2];
        num_carrot = cake_counts[0];
        num_cheese = cake_counts[1];
        num_choco = cake_counts[2];
    }

    // Set 2
    while ((num_americano + num_icetea + num_smoothie) >= 2 &&
           (num_carrot + num_cheese + num_choco) >= 1) {

        num_set2++;

        int beverage_prices[] = {price_americano, price_icetea, price_smoothie};
        int beverage_counts[] = {num_americano, num_icetea, num_smoothie};

        int cake_prices[] = {price_carrot, price_cheese, price_choco};
        int cake_counts[] = {num_carrot, num_cheese, num_choco};

        int selected_beverages_cost = 0;
        for (int i = 0; i < 2; i++) {
            int max_index = -1;
            for (int j = 0; j < 3; j++) {
                if (beverage_counts[j] > 0 && (max_index == -1 || beverage_prices[j] > beverage_prices[max_index])) {
                    max_index = j;
                }
            }
            if (max_index != -1) {
                selected_beverages_cost += beverage_prices[max_index];
                beverage_counts[max_index]--;
            }
        }

        int selected_cake_cost = 0;
        int max_index = -1;
        for (int j = 0; j < 3; j++) {
            if (cake_counts[j] > 0 && (max_index == -1 || cake_prices[j] > cake_prices[max_index])) {
                max_index = j;
            }
        }
        if (max_index != -1) {
            selected_cake_cost += cake_prices[max_index];
            cake_counts[max_index]--;
        }

        total_price_set2 += (selected_beverages_cost + selected_cake_cost) * 0.9;
        
        num_americano = beverage_counts[0];
        num_icetea = beverage_counts[1];
        num_smoothie = beverage_counts[2];
        num_carrot = cake_counts[0];
        num_cheese = cake_counts[1];
        num_choco = cake_counts[2];
    }

    total_price = total_price_set1 + total_price_set2 +
                  num_americano * price_americano +
                  num_icetea * price_icetea +
                  num_smoothie * price_smoothie +
                  num_carrot * price_carrot +
                  num_cheese * price_cheese +
                  num_choco * price_choco;


    /* 출력 부분: 수정하지 마세요 */ 
    printf("\n품목      갯수   금액\n");
    if (num_set1 > 0)
        printf("세트1    %4d %7d\n",num_set1, total_price_set1);
    if (num_set2 > 0)
        printf("세트2    %4d %7d\n", num_set2, total_price_set2);
    if (num_americano > 0)
        printf("커피     %4d %7d\n", num_americano, price_americano * num_americano);
    if (num_icetea > 0)
        printf("아이스티 %4d %7d\n", num_icetea, price_icetea * num_icetea);
    if (num_smoothie > 0)
        printf("스무디   %4d %7d\n", num_smoothie, price_smoothie * num_smoothie);
    if (num_carrot > 0)
        printf("당근케잌 %4d %7d\n", num_carrot, price_carrot * num_carrot);
    if (num_cheese > 0)
        printf("치즈케잌 %4d %7d\n", num_cheese, price_cheese * num_cheese);
    if (num_choco > 0)
        printf("초코케잌 %4d %7d\n", num_choco, price_choco * num_choco);
    printf("----------------------------\n");
    printf("총 지불 금액 %8d\n", total_price);
    /* ------------------------- */

    return 0;

}
