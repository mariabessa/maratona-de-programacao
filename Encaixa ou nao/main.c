#include <stdio.h>
#include <string.h>
int main(){
	int n, cont=0;
	char num1[1000], num2[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		cont = 0;
		scanf("%s %s", num1, num2);
		int tam1 = strlen(num1);
		int tam2 = strlen(num2);
		if (tam1 > tam2){
			for (int i = 0; i < tam2; i++){
				if(num1[tam1 - tam2 + i] != num2[i]){
					break;
				}else{
					cont++; 
				}
			}
			if (cont == tam2){
				printf("encaixa\n");
			}else{
				printf("nao encaixa\n");
		}
		}else if (tam2 > tam1){
			for (int i = 0; i < tam2; i++){
				if(num2[tam2 - tam1 + 1 + i] != num1[i]){
					break;
				}else{
					cont++; 
				}
			}
			if (cont == tam1){
				printf("encaixa\n");
			}else{
				printf("nao encaixa\n");
		}
		}else if(tam2== tam1){
			for (int i = 0; i < tam2; i++){
				if(num2[i] != num1[i]){
					break;
				}else{
					cont++; 
				}
			}
			if (cont == tam1){
				printf("encaixa\n");
			}else{
				printf("nao encaixa\n");
		}
		}
	}
	return 0;
}
