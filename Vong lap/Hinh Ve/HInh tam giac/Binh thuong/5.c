#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i, j;
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			if(i==1 || i==n || i==j || j==1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}
