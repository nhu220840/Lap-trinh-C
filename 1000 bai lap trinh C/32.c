#include <stdio.h>
#include <math.h>
int main(){
	int n; scanf("%d", &n);
	int x = sqrt(n);
	if(x*x == n) printf("YES");
	else printf("NO");
}
