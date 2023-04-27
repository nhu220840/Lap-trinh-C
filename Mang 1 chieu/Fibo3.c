#include <stdio.h>

#define ll long long

ll F[100];

void Fibo(){
	F[0] = 0;
	F[1] = 1;
	for(int i = 2; i <= 92; i++){
		F[i] = F[i-1] + F[i-2];
	}
}

void checkFibo(ll n){
	for(int i = 0; i <= 92; i++){
		if(F[i] >= n){
			printf("%lld", F[i]);
			break;
		}
	}
}

int main(){
	Fibo();
	ll n; scanf("%lld", &n);
	checkFibo(n);
}
