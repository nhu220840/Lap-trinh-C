#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i;
	for(i=1; i<=n; i++){
		if(n%i == 0 && i%2 != 0) printf("%d ", i);
	}
}
