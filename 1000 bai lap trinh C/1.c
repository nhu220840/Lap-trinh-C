#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i;
	int sum = 0;
	for(i=1; i<=n; i++){
		sum += i;
	}
	printf("%d", sum);
}
