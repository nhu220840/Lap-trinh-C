#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	float sum = 0;
	int i;
	for(i=1; i<=n; i++){
		sum += 1.0*1/i;
	}
	printf("%f", sum);
}
