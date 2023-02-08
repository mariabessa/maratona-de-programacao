#include <stdio.h>
#include <string.h>
#define N 100

int main(){
	int n, d;
	char text[N];
	scanf ("%d", &n);
	for (int i = 0; i < n; i++){
		getchar();
		fgets(text, N, stdin);
		int tam = strlen(text);
		text[tam-1]='\0';
		scanf("%d", &d);
		for (int j = 0; j < tam-1; j++){
			if (text[j] > 64 || text[j] < 91){
				text[j] -= d;
				if (text[j] < 65){
					text[j] += 26;
				}
			}
		}
		printf("%s\n", text);
	}
	return 0;
}
	
