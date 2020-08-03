#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int T; cin>>T;
	while(T--) {
		int n; cin>>n;
		string ret; char ch;
		while(n--) cin>>ch, ret+=ch;
		cout<<ret<<"\n";
	}
	return 0;
}