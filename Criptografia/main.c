#include <stdio.h>
#include <string.h>
#define M 1000

int main(){
	int num;
	char texto[M];
	scanf("%d ", &num);
	for (int i = 0; i < num; i++){
		fgets(texto, 1000, stdin);
		int tam = strlen(texto);
		texto[tam-1]='\0';
		for (int i = 0; i < tam; i++){
			if ((texto[i]>64 && texto[i]<91) || (texto[i]>96 && texto[i]<123)){
				texto[i] = texto[i] + 3;
			}
		}
		for (int i = 0; i < (tam-1) / 2; i++){
			char aux = texto[tam-2-i];
			texto[tam-2-i] = texto[i];
			texto[i] = aux; 
		}
		
		for (int i = (tam-1)/2; i < tam-1; i++){	
			texto[i] = texto[i] - 1;
		}
		printf("%s\n", texto);
	}
	return 0;
}
