#include <stdio.h>

int main(){
	int n, cont=0;
	float c;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%f", &c);
		while(c>1){
			c = c / 2.0;
			cont++;
		}
		printf("%d dias\n", cont);
		cont = 0;
	}
	return 0;
}
		
