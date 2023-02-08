#include <stdio.h>

#define n 12

/*O programa le um caractere maiúsculo ('M' Ou 'S'), que indica uma operação que deve
 ser realizada e uma matriz M[12][12]. Em seguida, calcula e impreme a soma ou a média 
 considerando somente aqueles elementos que estão abaixo da diagonal principal da matriz*/


int main(){
	float soma=0, matriz[n][n];
	char o;
	float c=0;
	scanf("%c", &o);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%f", &matriz[i][j]);
		}
	}
	for(int i=1; i<=n-1; i++){
		for(int j=0; j<i; j++){
			soma+= matriz[i][j];
			c++;
		}
	}
	if (o=='S'){
		printf("%.1f\n", soma);
	}
	else if(o=='M'){
		printf("%.1f\n", soma/c);
	}
	return 0;
}
	
