#include <stdio.h>

int main(){
	int r=0, t = 0, qi, qg, gv = 0, iv = 0, e=0;
	do{
		scanf("%d %d", &qi, &qg);
		t++;
		if (qi > qg){
			iv++;
		}
		else if (qi < qg){
			gv++;
		}
		else{
			e++;
		}
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &r);
	}while (r == 1);
	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", t, iv, gv, e);
	if (gv > iv){
		printf("Gremio venceu mais\n");
	}
	else{
		printf("Inter venceu mais\n");
	}
	return 0;
}
