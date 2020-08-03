#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        char c;
        while(n--) cin>>c, s+=c;
        cout<<s<<endl;
    }
    return 0;
}