#include <stdio.h>

int main(){
	int x, z, c = 1, aux;
	scanf("%d", &x);
	aux = x;
	do{
		scanf("%d", &z);
	}while(z <= x);
	do{
		x = x + 1;
		aux += x;
		c++;
	}while (aux < z);
	printf("%d\n", c);
	return 0;
}
