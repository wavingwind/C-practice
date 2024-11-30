#include <stdio.h>
#include <string.h>

#define MAX_PRODUCT 5

//PRODUCT 구조체 선언
/*put your answer*/
typedef struct{
    char color[20];
    int price;
    int stock;
} PRODUCT;

int cnt_products = 3;

void print_product(const PRODUCT *p)
{
    printf("[%s 재고:%d]\n", p->color, p->stock);
}

PRODUCT *find_product(PRODUCT *arr, const char* prd_color)
{
    int i;
    for (i = 0; i < cnt_products; i++)
        if (strcmp(arr[i].color, prd_color) == 0)
            return &arr[i];
    return NULL;
}

void add_product(PRODUCT *p, char* prd_color, int add_stock)
{
    /*put your answer*/
    for(int i=0; i<cnt_products; i++){
        if(strcmp(prd_color, p[i].color) == 0){
            p[i].stock += add_stock;}
    }
}


int order(PRODUCT *p, int amount)
{
    /*put your answer*/
    p->stock -= amount;
    return amount * p->price;
}

int main(void)
{
    //제품 정보 초기화
    PRODUCT products[MAX_PRODUCT] = {
        {"white", 4000, 15}, {"yellow", 4500, 20}, {"black", 5000, 5}
    };
    
    //변수 
    int i;
    char prd_color[20];
    PRODUCT *p = NULL;
    PRODUCT *p2 = NULL;
    int choice;
    int add_stock;
    int amount;
    int payment;

    p = products;
    while(1){
        printf("\n재고를 추가하려면 1, 주문을 하려면 2, 종료는 3을 입력하세요: ");
        scanf("%d", &choice);
        if(choice == 1){
            while(1){
                printf("재고에 추가할 색상, 갯수를 순서대로 입력하세요: ");
                scanf("%s %d", prd_color, &add_stock);
                
                if(find_product(p, prd_color) == NULL){
                    printf("제품을 찾을 수 없습니다.\n");
                }
                else{
                    add_product(p, prd_color, add_stock);
                    for(i=0; i<cnt_products; i++){
                        print_product(p+i);
                    }
                break;
                }
            }
        }

        else if(choice == 2){
            while(1){
                printf("\n주문할 제품의 색상과 주문 수량을 입력하세요: ");
                scanf("%s %d", prd_color, &amount);
                p2 = find_product(p, prd_color);
                if(find_product(p, prd_color) == NULL){
                    printf("제품을 찾을 수 없습니다.\n");
                }
                else if(amount > p2->stock){
                    printf("재고가 부족합니다.\n");
                }
                else{
                    payment = order(find_product(p, prd_color), amount);
                    break;
                }
            }
            printf("결제 금액은 %d원 입니다.\n", payment);
            for(i=0; i<cnt_products; i++){
                        print_product(p+i);
            }
        }

        else if(choice == 3){
            printf("프로그램을 종료합니다.\n");
            break;
        }
    }

    /* 구현 시 입출력은 다음 코드 복사하여 이용       
    //제품의 재고 목록 출력:
    for (i = 0; i < cnt_products; i++){
        print_product(&products[i]);
    }

    //기능 선택:
    printf("\n재고를 추가하려면 1, 주문을 하려면 2, 종료는 3을 입력하세요: ");
    scanf("%d", &choice);

    //재고 추가 기능 구현:
    printf("재고에 추가할 색상, 갯수를 순서대로 입력하세요: ");
    scanf("%s %d", prd_color, &add_stock);
    printf("제품을 찾을 수 없습니다.\n");

    // 주문 처리 기능 구현:
    printf("\n주문할 제품의 색상과 주문 수량을 입력하세요: ");
    scanf("%s %d", prd_color, &amount);
    printf("제품을 찾을 수 없습니다.\n");
    printf("재고가 부족합니다.\n");
    printf("결제 금액은 %d원 입니다.\n", payment);

    // 프로그램 종료 시:
    printf("프로그램을 종료합니다.\n");
    */
        
    return 0;
}


