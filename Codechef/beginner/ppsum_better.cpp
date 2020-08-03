#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int  t;
    cin>>t;
    while(t--){
        int i,n;
        cin>>i>>n;
        while(i--){
            n = n*(n+1)/2;
        }
        cout<<n<<endl;

    }
    return 0;
}