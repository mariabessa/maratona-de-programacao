#include <stdio.h>

int main () {
	int vetor[5];
	char letra [5] = {'A','B','C','D','E'};
	int cont;
	
	do {
		scanf("%d", &cont);
		for (int i=0; i<cont; i++) {
			int aux;
			int para = 0;
			scanf("%d %d %d %d %d", &vetor[0], &vetor[1], &vetor[2], &vetor[3], &vetor[4]);
			for (int j=0; j<5; j++) {
				if (vetor[j] <= 127) {
					para++; 
					aux = j;
				}
			}
			
			if (para == 1) 
				printf("%c\n", letra[aux]);
			else
				printf("*\n");
		}		
	} while (cont != 0);
	
	return 0;
}
	
