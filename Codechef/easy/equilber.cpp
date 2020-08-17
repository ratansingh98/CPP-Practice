#include<bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;

int mPow(long long int a, long long int n) {
	long long int r = 1;
	while (n > 0) {
		if (n & 1) {
			r =  r * a % MOD;
		}
		a =  a * a % MOD;
		n >>= 1;
	}
	return r;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    long long int n=0,k=0;
    cin>>n;
    cin>>k;
	printf("%lld\n", n == 2 ? 0 : (1 -  n * mPow((MOD + 1) / 2, n - 1) % MOD + MOD) % MOD);
    return 0;
}