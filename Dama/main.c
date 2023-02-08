#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
} ponto;

/*Dado duas posições distintas em um jogo de xadrez, o programa deve retornar
um valor indicando o menor número de movimentos necessários para a dama chegar 
em sua casa de destino.*/

int main () {
	ponto um, dois;
	
	do {
	scanf("%d %d", &um.x, &um.y);
	scanf("%d %d", &dois.x, &dois.y);
	
	if (um.x == 0)
		break;	
	else if (um.x == dois.x && dois.y == um.y)
		printf("0\n");
	else if (um.x == dois.x || dois.y == um.y)
		printf("1\n");
	else if (abs(um.x - dois.x) == abs(um.y - dois.y))
		printf("1\n");
	else 
		printf("2\n");
	} while (um.x != 0);
	
	return 0;
}
		
