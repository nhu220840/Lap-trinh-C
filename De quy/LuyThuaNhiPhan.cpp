#include <stdio.h>
#include <math.h>

#define ll long long
const int MOD = 1e9 + 7;

ll pow1(ll a, ll b){
    if(b == 0)
        return 1;
    ll x = pow1(a, b / 2);
    if(b % 2 == 0)
        return ((x % MOD) * (x % MOD)) % MOD;
    else
        return ((x % MOD) * (x % MOD)) % MOD * (a % MOD) % MOD;
}

int main(){
    ll a, b; scanf("%lld %lld", &a, &b);
    printf("%lld", pow1(a, b));
}