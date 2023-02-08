#include <stdio.h>

#define N 100

/*O programa le um vetor A[100]. No final, mostre todas as posições do vetor que 
armazenam um valor menor ou igual a 10 e o valor armazenado em cada uma das posições.*/

int main(){
	float A[N];
	for (int i=0; i<N; i++){
		scanf("%f", &A[i]);
	}
	for (int i=0; i<N; i++){
		if (A[i]<=10){
			printf("A[%d] = %.1f\n", i, A[i]);
		}
	}
	return 0;
}
	
