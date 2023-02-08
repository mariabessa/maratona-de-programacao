#include <stdio.h>

int main(){
	int e=0, n, t = 0, qc = 0, qr = 0, qs = 0;
	char c;
	scanf("%d", &e);
	for (int i = 0; i<e; i++){
		scanf("%d %c ", &n, &c);
		t += n;
		for (int j= 0; j < n; j++){
			if (c == 'C')
				qc++;
			else if (c == 'S')
				qs++;
			else
				qr++;
		}
	}
	printf ("Total: %d cobaias\n", t);
	printf ("Total de coelhos: %d\n", qc);
	printf ("Total de ratos: %d\n", qr);
	printf ("Total de sapos: %d\n", qs);
	printf("Percentual de coelhos: %.2lf %%\n", qc*100/(float)t);
	printf("Percentual de ratos: %.2lf %%\n", qr*100/(float)t);
	printf("Percentual de sapos: %.2lf %%\n", qs*100/(float)t);
	return 0;
}
