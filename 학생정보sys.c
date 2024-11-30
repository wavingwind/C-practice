#include <stdio.h>
#include <string.h>

#define BUF_SIZE 64
#define MAX_PRESENTATION_LIST 3
#define MAX_SEMESTER 8

typedef struct STUDENT {
    /*put your answer*/
    char name[BUF_SIZE];       // 학생 이름
    char ID[BUF_SIZE];         // 학번
    int semester;              // 학기
    char class_name[BUF_SIZE]; // 수강 과목 이름
} STUDENT;

STUDENT s_list_align[]={0};

/* 출력 부분: 수정하지 마세요 */
void print_student(const STUDENT *s){
    printf("%-9s %-5s %5d %10s\n", s->name, s->ID, s->semester, s->class_name);
}
/* -------------------------- */


/* print_student_list 함수 구현 */
void print_student_list(STUDENT *s, int count) {
    // 버블 정렬을 사용하여 학생 목록을 학기별로 오름차순으로 정렬합니다.
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (s[j].semester > s[j + 1].semester) {
                STUDENT temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("\n%8s  %-11s %-5s %10s %14s\n", "번호", "이름", "학번", "학기", "수강과목");
    for (int i = 0; i < count; i++) {
        printf("%3d번: ", i + 1); // 번호는 1부터 시작
        print_student(&s[i]);
    }
}
// 반드시 다음 코드 사용해서 출력하세요. 
// 가장 윗줄: printf("\n%8s  %-11s %-5s %10s %14s\n", "번호", "이름", "학번", "학기", "수강과목"); 이용하여 출력
// 학생 번호: printf("%3d번: ",변수); 이용하여 출력
// 학생 정보: print_student 함수 이용하여 출력 
/* -------------------------- */

/* find_student 함수 구현 */
void find_student(const STUDENT *s, int count, const char *search_term) {
    int found = 0; // 검색된 학생 수를 카운트하기 위한 변수

    for (int i = 0; i < count; i++) {
        if (strcmp(s[i].name, search_term) == 0 || strcmp(s[i].class_name, search_term) == 0) {
            printf("%3d번: ", i + 1);
            print_student(&s[i]);
            found++;
        }
    }
    
    if (found == 0) {
        printf("해당 학생 정보를 찾을 수 없습니다.\n");
    }
}
// 반드시 다음 코드 사용해서 출력하세요.
// 학생 번호: printf("%3d번: ",변수); 이용하여 출력
// 학생 정보: print_student 함수 이용하여 출력
/* -------------------------- */

/* print_presentation_list 함수 구현 */
void print_presentation_list(const STUDENT *s, int count) {
    printf("<< 발표리스트 >>\n");
    for (int i = 0; i < count; i++) {
        printf("%3d번: ", i + 1);
        print_student(&s[i]);
    }
    printf("총 발표명 수: %d명\n", count);
}
// 반드시 다음 코드 사용해서 출력하세요.
// 가장 윗줄: printf("<< 발표리스트 >>\n"); 이용하여 출력
// 학생 번호: printf("%3d번: ",변수); 이용하여 출력
// 학생 정보: print_student 함수 이용하여 출력
/* -------------------------- */


int main(void)
{
    /* 입력 부분: 수정하지 마세요 */
	STUDENT s_list[] = {
		{"Jihyeon", "2018001", 8, "class1" }, 
		{"Sujung", "2022015", 2, "class2"}, 
		{"Minjung", "2021016", 3, "class2"},
		{"Minji", "2021013", 4, "class4"},
		{"Sujung", "2020033", 5, "class3"},
		{"Heejoon", "2020010", 6, "class4"},
		{"Ayoon", "2019022", 5, "class1"},
        {"Jihyeon", "2019001", 7, "class5"},	
	};
    /* -------------------------- */

    // #1-2 구현 시 반드시 다음 코드 사용해서 출력하세요.
    // printf("\n찾으려는 학생의 이름 또는 수강과목을 입력하세요(종료는 exit): ");
    
    // #1-3 구현 시 반드시 다음 코드 사용해서 출력하세요.
    // printf("\n발표리스트에 추가하려면 1번, 삭제하려면 2번, 종료하려면 3번을 누르세요: ");
    // printf("발표리스트에 추가할 학생 번호를 입력하세요: ");
    // printf("이미 발표리스트에 있는 학생입니다.\n");
    // printf("잘못된 번호입니다.\n");   
    // printf("발표리스트에서 삭제할 학생 번호를 입력하세요: ");
    // printf("삭제할 학생이 없습니다.\n");
    
    /* Put your answer */
    int student_count = sizeof(s_list) / sizeof(s_list[0]);
    STUDENT presentation_list[MAX_PRESENTATION_LIST];
    int presentation_count = 0;

    print_student_list(s_list, student_count);

    // 학생 검색
    char search_term[BUF_SIZE];
    while (1) {
        printf("\n찾으려는 학생의 이름 또는 수강과목을 입력하세요(종료는 exit): ");
        scanf("%s", search_term);
        if (strcmp(search_term, "exit") == 0) {
            break; // 입력 종료
        }
        find_student(s_list, student_count, search_term);
    }

    while (1) {
        int choice;
        printf("\n발표리스트에 추가하려면 1번, 삭제하려면 2번, 종료하려면 3번을 누르세요: ");
        scanf("%d", &choice);

        if (choice == 1) { // 학생 추가
            if (presentation_count >= MAX_PRESENTATION_LIST) {
                break;
            }
            int student_num;
            printf("발표리스트에 추가할 학생 번호를 입력하세요: ");
            scanf("%d", &student_num);

            if (student_num < 1 || student_num > student_count) {
                printf("잘못된 번호입니다.\n");
                continue;
            }

            // 중복 검사
            int is_duplicate = 0;
            for (int i = 0; i < presentation_count; i++) {
                if (strcmp(presentation_list[i].ID, s_list[student_num - 1].ID) == 0) {
                    is_duplicate = 1;
                    break;
                }
            }

            if (is_duplicate) {
                printf("이미 발표리스트에 있는 학생입니다.\n");
            } else {
                presentation_list[presentation_count++] = s_list[student_num - 1];
                printf("%s(%s)가 발표리스트에 추가되었습니다.\n", s_list[student_num - 1].name, s_list[student_num - 1].ID);
            }

            if (presentation_count == MAX_PRESENTATION_LIST) {
                break;
            }

        } else if (choice == 2) { // 학생 삭제
            if (presentation_count == 0) {
                printf("삭제할 학생이 없습니다.\n");
                continue;
            }
            int student_num;
            printf("발표리스트에서 삭제할 학생 번호를 입력하세요: ");
            scanf("%d", &student_num);

            if (student_num < 1 || student_num > presentation_count) {
                printf("잘못된 번호입니다.\n");
                continue;
            }

            // 삭제를 위해 학생 번호에 해당하는 인덱스를 조정 (1번부터 시작하기 때문에 -1)
            for (int i = student_num - 1; i < presentation_count - 1; i++) {
                presentation_list[i] = presentation_list[i + 1];  // 배열 앞당기기
            }
            presentation_count--;  // 발표리스트의 수 감소
        
        } else if (choice == 3) { // 종료
            break;  // 무한 루프 종료
        }

        // 현재 발표리스트 출력
        print_presentation_list(presentation_list, presentation_count);
    }

    return 0;
}
