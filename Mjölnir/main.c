#include <stdio.h>
#include <string.h>
#define n 15

/*O programa, dado um nome, e a força, em Newtons, aplicado ao tentar levantar o Mjölnir, informa 
se a pessoa conseguiu ou não levantá-lo. Apenas Thor é capaz de levantar o Mjölnir */

int main(){
	int t, num=0;
	char fortao[]="Thor", nome[n];
	scanf("%d", &t);
	for (int i=0; i<t; i++){
		scanf("%s %d", nome, &num);
		for (int j=0; j<n; j++){
			if (nome[j]== ' '){
				nome[j]= '\0';
			}
		}
		if (strcmp(nome, fortao)==0){
			printf("Y\n");
		}else{
			printf("N\n");
		}
	}
	return 0;
}

	
	
