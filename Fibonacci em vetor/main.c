#include <stdio.h>

int main(){
	int n, num;
	long long int fibo[64];
	fibo[0] = 0;
	fibo[1] = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &num);
		for (int i = 2; i<= num; i++){
				fibo[i] = fibo[i-1] + fibo[i-2];
		}
		printf("Fib(%d) = %lld\n", num, fibo[num]);
	}
	return 0;
}
	
