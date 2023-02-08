#include <stdio.h>

int main(){
	int n, num1, num2, resto;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d %d", &num1, &num2);
		do{ 
			resto = num1 % num2;
			num1 = num2;
			num2 = resto;
		} while (resto != 0);
		printf("%d\n", num1);
	}
	return 0;
}
