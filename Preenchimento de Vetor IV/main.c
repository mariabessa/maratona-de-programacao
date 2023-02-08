#include <stdio.h>
#define n 15
#define num 5

/*O programa le 15 valores, colocando em 2 vetores conforme estes valores forem pares ou ímpares. 
Porém o tamanho de cada um dos dois vetores é de 5 posições. Então, cada vez que um dos dois vetores 
encher, ele impreme todo o vetor e o utiliza novamente para os próximos números que forem lidos. */

int main(){
	int aux;
	int par[n];
	int impar[n];
	int c = 0, c2 = 0;
	for (int i=0; i<n; i++){
		scanf("%d", &aux);
		if (aux % 2 == 0){
			par[c]= aux;
			if (c == 4){
				for (int i2=0; i2<=c; i2++){
					printf("par[%d] = %d\n", i2, par[i2]);
				}
				c = 0;
			}else{
				c++;
			}
		}else{
			impar[c2]= aux;
			if (c2 == 4){
				for (int i2=0; i2<=c2; i2++){
					printf("impar[%d] = %d\n", i2, impar[i2]);
				}
				c2 = 0;
			}else{
				c2++;
			}
		}
	}
	for (int i=0; i<c2; i++){
		printf("impar[%d] = %d\n", i, impar[i]);
	}
	for (int i=0; i<c; i++){
		printf("par[%d] = %d\n", i, par[i]);
	}
	return 0;
}
	
	
