#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i, j;
	int cnt = 1, kc = 1;
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			printf("%d ", kc);
			kc += cnt;
			cnt++;
		}
		printf("\n");
	}
}
