#include <stdio.h>
#include<stdlib.h>
#include<math.h>

/*O programa pega 2 valores decimais de 32 bits sem sinal como entrada e produz um número de 32 bits sem sinal como saída*/

int* binario(unsigned int n);

int main(){
	
	unsigned int n, m;
	int e = 0;
	unsigned int resultado = 0;
	
	while (scanf("%u %u", &n, &m)!=EOF){
		int *nb = binario(n);
		int *mb = binario(m);
		int* r = calloc(32, sizeof(int));
		if (nb == NULL || mb == NULL)
			exit(1);
		for (int i = 31; i >= 0; i--){	
			r[i] = (nb[i] + mb[i] == 2 ? 0 : nb[i] + mb[i]);
		}
		for (int i=31; i>= 0; i--){
			resultado += (long) r[i] * pow(2, e);
			e++;
		}
		printf("%u\n", resultado);
		free (nb);
		free(mb);
		free(r);
		mb = NULL;
		nb = NULL;
		r = NULL;
		resultado = 0;
		e=0;
	}
	
	return 0;
}

int* binario(unsigned int n){
	int* nb = calloc(32, sizeof(int));
	for (int i = 31; n > 0; i--){
		nb[i]= n % 2;
		n = n / 2;
	}
	return nb;
}
		
