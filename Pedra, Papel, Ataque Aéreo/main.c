#include <stdio.h>
#include <string.h>
#define C 30

/*Ataque Aéreo vs. Pedra: Neste caso, o jogador com o Ataque Aéreo derrota o jogador com a Pedra, por razões óbvias.
Pedra vs. Papel: Neste caso, o jogador com a Pedra derrota o com Papel, porque a Pedra machuca muito mais.
Papel vs. Ataque Aéreo: Aqui o Ataque Aéreo ganha, porque Ataque Aéreo sempre ganha e o Papel é patético.
Papel vs. Papel: Nesta variação, ambos os jogadores ganham, porque o Papel é inútil e ninguém que enfrenta o Papel pode perder.
Pedra vs. Pedra: Para este caso não há ganhador, porque depende do que os jogadores decidem fazer com a Pedra e normalmente não fazem nada.
Ataque Aéreo vs. Ataque Aéreo: Quando isto acontece, todos os jogadores perdem, devido a Aniquilação Mútua. */


void jogo(char j1[C], char j2[C]){
	
	if(strcmp(j1, "ataque") == 0 && strcmp(j2, "ataque") != 0){		//Ataque Arereo vs contra variantes
	
		printf("Jogador 1 venceu\n");	
	}
		else if(strcmp(j1, "ataque") != 0 && strcmp(j2, "ataque") == 0){
		
			printf("Jogador 2 venceu\n");
		}

		else if(strcmp(j1, "ataque") == 0 && strcmp(j2, "ataque") == 0){	//ataque vs ataque
		
			printf("Aniquilacao mutua\n");
		}

		else if(strcmp(j1, "pedra") == 0 && strcmp(j2, "papel") == 0){
		
			printf("Jogador 1 venceu\n");
		}
		
		else if(strcmp(j1, "papel") == 0 && strcmp(j2, "pedra") == 0){
		
			printf("Jogador 2 venceu\n");
		}
		
		else if(strcmp(j1, "papel") == 0 && strcmp(j2, "papel") == 0){
		
			printf("Ambos venceram\n");
		}
		
		else if(strcmp(j1, "pedra") == 0 && strcmp(j2, "pedra") == 0){
		
			printf("Sem ganhador\n");
		}
}

int main() {

	int n;
	char j1[C], j2[C];

	do{	
	scanf("%d", &n);
	}while(n < 1 || n > 1000);
	
	for(int i = 0; i < n; i++){
			scanf("%s", j1);
			scanf("%s", j2);
			jogo(j1, j2);
			
	}
	


	return 0;
}


	
	
