#include <stdio.h>

#define M 4
#define N 3

int main(void){

	int mat1[M][N];
	int mat2[N][M];
	int i, j;

	//행렬 원소 입력
    printf("mat1과 mat2에 들어갈 원소값을 입력하세요(원소 M*N개 순서대로 입력, 행 채우고 열 채움).\n");
   
   /*put your answer*/
    int arr[M*N];

   for(i=0; i<M*N; i++){
       scanf("%d", &arr[i]);
   }

    // for(i=0; i<M*N; i++){
    //     printf("%d", arr[i]);
    // }

    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            mat1[i][j] = arr[N*i+j];
            // printf("%2d %2d %2d \n", i, j, (N*i+j));  
        }
    }

    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            for(int k = 0; k<M*N; k++){
               mat2[i][j] = arr[M*i+j]; 
            }
            
        }
    }
	    
	// 출력 (수정하지 마세요!)
	printf("\n M x N mat1 행렬 \n");
	for(i=0;i<M;i++) 
	{
		for(j=0;j<N;j++)
		{
			printf("%3d  ", mat1[i][j]);
		}
		printf("\n");
	}

	printf("\n N x M mat2 행렬 \n");
	for(i=0;i<N;i++) 
	{
		for(j=0;j<M;j++)
		{
			printf("%3d  ", mat2[i][j]);
		}
		printf("\n");
	}


	return 0;
}
