#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	uint16_t n;
	cin >> n;
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < n ; j++){
			cout << ( i + j ) % 2<<" ";
		}
		cout<<"\n";
	}
	return 0;
}


